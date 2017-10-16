/**
 * Implementation of the GameBoy GPU
 *
 * @author Brent Chesny
 */
#include "gpu.h"
#include "error.h"
#include "window.h"

#include <stdio.h>
#include <stdlib.h>

/* Public functions */

gb_gpu* gb_gpu_create()
{
  gb_gpu* gpu = (gb_gpu*) malloc(sizeof(gb_gpu));
  gpu->mode = OAM_MODE;
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
          // TODO: render the screen
          _gb_gpu_render_screen(gameboy);
          // gb_err_debug(NULL, "Rendering screen...");
        }
        else
        {
          gameboy->gpu->mode = OAM_MODE;
        }

        // TODO: curscan += 640 ?
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
          // TODO: curscan = 0 ?
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
  bg_map_base += (((gameboy->gpu->registers[LY] + gameboy->gpu->registers[SCY]) % 256) / 8) * 32;

  int y = (gameboy->gpu->registers[LY] + gameboy->gpu->registers[SCY]) % 8;
  int x = gameboy->gpu->registers[SCX] % 8;
  int t = (gameboy->gpu->registers[SCX] / 8) % 32;


  if (gameboy->gpu->registers[LCDC] & BG_FLAG)
  {
    // For now we assume that the tileset located at offset 0x0000 is used
    // TODO: implement branching on the used tileset
    int8_t tile = gameboy->gpu->vram[bg_map_base + t];
    uint16_t tile_addr = bg_tiles_base + (tile * 16) + (y * 2);
    uint8_t tile_row_upper = gameboy->gpu->vram[tile_addr];
    uint8_t tile_row_lower = gameboy->gpu->vram[tile_addr + 1];
    uint8_t tile_row[8];
    for (size_t i = 0; i < 8; i++) {
      uint8_t bit = 1 << (7 - i);
      tile_row[i] = ((tile_row_upper & bit) << 1) + (tile_row_lower & bit);
    }

    for (size_t w = 0; w < SCREEN_WIDTH; w++) {
      gameboy->gpu->buffer[gameboy->gpu->registers[LY]][w] = tile_row[x] * 95;
      x++;
      // If end of tile is reached, we load the next tile
      if (x == 8)
      {
        t = (t + 1) % 32;
        x = 0;
        tile = gameboy->gpu->vram[bg_map_base + t];
        tile_addr = bg_tiles_base + (tile * 16) + (y * 2);
        tile_row_upper = gameboy->gpu->vram[tile_addr];
        tile_row_lower = gameboy->gpu->vram[tile_addr + 1];
        for (size_t i = 0; i < 8; i++) {
          uint8_t bit = 1 << (7 - i);
          tile_row[i] = ((tile_row_upper & bit) << 1) + (tile_row_lower & bit);
        }
      }
    }
  }
}

void _gb_gpu_render_screen(gb_gameboy* gameboy)
{
  gb_window_draw(gameboy->window, (uint8_t**) gameboy->gpu->buffer);
}
