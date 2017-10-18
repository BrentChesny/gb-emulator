/**
 * Implementation of the GameBoy GPU
 *
 * @author Brent Chesny
 */
#include "gpu.h"
#include "error.h"

#include <stdio.h>
#include <stdlib.h>

/* Public functions */

gb_gpu* gb_gpu_create()
{
  gb_gpu* gpu = (gb_gpu*) malloc(sizeof(gb_gpu));
  gpu->mode = OAM_MODE;
  gpu->registers[LCDC] = BG_TILES_FLAG;
  gpu->registers[SCY] = 0;
  gpu->registers[SCX] = 0;
  return gpu;
}


void gb_gpu_destroy(gb_gpu* gpu)
{
  free(gpu);
}

void gb_gpu_tick(gb_gameboy* gameboy, uint8_t cycles)
{
  // gb_err_debug(NULL, "Cycles: %d", cycles);
  // gb_err_debug(NULL, "GPU Mode: %d", gameboy->gpu->mode);

  gameboy->gpu->clock += cycles;

  switch (gameboy->gpu->mode) {
    case OAM_MODE:
      // End of OAM access
      if (gameboy->gpu->clock >= 20)
      {
        gameboy->gpu->clock = 0;
        gameboy->gpu->mode = VRAM_MODE;
      }
      break;
    case VRAM_MODE:
      // End of VRAM access, so render scanline
      if (gameboy->gpu->clock >= 43)
      {
        gameboy->gpu->clock = 0;
        gameboy->gpu->mode = HBLANK_MODE;
        _gb_gpu_render_scanline(gameboy);
      }
      break;
    case HBLANK_MODE:
      // End of h-blank
      if (gameboy->gpu->clock >= 51)
      {
        // If last scanline is finished, render
        // the full screen and go to v-blank
        if (gameboy->gpu->registers[LY] == 143)
        {
          gameboy->gpu->mode = VBLANK_MODE;
        }
        else
        {
          gameboy->gpu->mode = OAM_MODE;
        }
        gameboy->gpu->registers[LY]++;
        gameboy->gpu->clock = 0;
      }
      break;
    case VBLANK_MODE:
      // End of v-blank
      if (gameboy->gpu->clock >= 114)
      {
        gameboy->gpu->clock = 0;
        gameboy->gpu->registers[LY]++;
        if (gameboy->gpu->registers[LY] > 153)
        {
          gameboy->gpu->mode = OAM_MODE;
          gameboy->gpu->registers[LY] = 0;
        }
      }
      break;
  }
}

/* Private functions */

void _gb_gpu_render_scanline(gb_gameboy* gameboy)
{
  uint16_t bg_tiles_base = (gameboy->gpu->registers[LCDC] & BG_TILES_FLAG) ? 0x0000 : 0x0800;
  uint16_t bg_map_base = (gameboy->gpu->registers[LCDC] & BG_MAP_FLAG) ? 0x1C00 : 0x1800;
  bg_map_base += (((gameboy->gpu->registers[LY] + gameboy->gpu->registers[SCY]) & 255) >> 3) << 5;

  int y = (gameboy->gpu->registers[LY] + gameboy->gpu->registers[SCY]) & 7;
  int x = gameboy->gpu->registers[SCX] & 7;
  int t = (gameboy->gpu->registers[SCX] >> 3) & 31;

  uint8_t bg_palette[4];
  _gb_gpu_load_palette(gameboy->gpu->registers[BGP], bg_palette);

  if (gameboy->gpu->registers[LCDC] & BG_FLAG)
  {
    // For now we assume that the tileset located at offset 0x0000 is used
    // TODO: implement branching on the used tileset
    uint8_t tile_row[8];
    _gb_gpu_load_tile_row(gameboy, tile_row, t, y, bg_tiles_base, bg_map_base);

    for (size_t w = 0; w < SCREEN_WIDTH; w++) {
      // TODO: optimize graphic performance to allow for larger scaling
      uint32_t* p_screen = (uint32_t*) gameboy->screen->pixels;
      uint32_t pixel = SDL_MapRGBA(gameboy->screen->format, bg_palette[tile_row[x]], bg_palette[tile_row[x]], bg_palette[tile_row[x]], 0xFF);
      for (size_t i = 0; i < SCREEN_SCALE; i++) {
        for (size_t j = 0; j < SCREEN_SCALE; j++) {
          p_screen[(gameboy->gpu->registers[LY] * SCREEN_SCALE + i) * SCREEN_WIDTH * SCREEN_SCALE + (w * SCREEN_SCALE + j)] = pixel;
        }
      }
      x++;
      // If end of tile is reached, we load the next tile
      if (x == 8)
      {
        t = (t + 1) & 31;
        x = 0;
        _gb_gpu_load_tile_row(gameboy, tile_row, t, y, bg_tiles_base, bg_map_base);
      }
    }
  }
}

void _gb_gpu_load_tile_row(gb_gameboy* gameboy, uint8_t tile_row[], int map_entry_idx, int y, uint16_t bg_tiles_base, uint16_t bg_map_base)
{
  int8_t tile = gameboy->gpu->vram[bg_map_base + map_entry_idx];
  uint16_t tile_addr = bg_tiles_base + (tile * 16) + (y * 2);
  uint8_t tile_row_lower = gameboy->gpu->vram[tile_addr];
  uint8_t tile_row_upper = gameboy->gpu->vram[tile_addr + 1];
  for (size_t i = 0; i < 8; i++) {
    uint8_t bit = 1 << (7 - i);
    tile_row[i] = (tile_row_upper & bit) ? 2 : 0;
    tile_row[i] += (tile_row_lower & bit) ? 1 : 0;
  }
}

void _gb_gpu_load_palette(uint8_t reg, uint8_t buffer[])
{
  for (size_t i = 0; i < 4; i++)
  {
    switch((reg >> (i * 2)) & 3)
    {
      case 0: buffer[i] = 255; break;
      case 1: buffer[i] = 192; break;
      case 2: buffer[i] = 96; break;
      case 3: buffer[i] = 0; break;
    }
  }
}
