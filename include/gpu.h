/**
 * Definition of the GameBoy GPU
 *
 * @author Brent Chesny
 */
#ifndef GPU_H__
#define GPU_H__

#include <stdint.h>

#define VRAM_SIZE 8192
#define OAM_SIZE 160
#define N_GPU_REGISTERS 11

#define OAM_MODE 1
#define VRAM_MODE 2
#define HBLANK_MODE 3
#define VBLANK_MODE 4

#define LCDC 0x00
#define STAT 0x01
#define SCY 0x02
#define SCX 0x03
#define LY 0x04
#define LYC 0x05
#define DMA 0x06
#define BGP 0x07
#define OBP0 0x08
#define OBP1 0x09
#define WY 0x0A
#define WX 0x0B

#define BG_FLAG 0x01
#define SPRITE_FLAG 0x02
#define SPRITE_SIZE_FLAG 0x04
#define BG_MAP_FLAG 0x08
#define BG_TILES_FLAG 0x10
#define WINDOW_FLAG 0x20
#define WINDOW_MAP_FLAG 0x40
#define DISP_FLAG 0x80


/**
 * Forward declaration of gb_gameboy
 */
typedef struct gb_gameboy gb_gameboy;


/**
 * Type definition of the GameBoy GPU struct
 */
typedef struct gb_gpu {
  uint8_t vram[VRAM_SIZE];
  uint8_t oam[OAM_SIZE];
  uint8_t registers[N_GPU_REGISTERS];

  uint16_t clock;
  uint8_t mode;
} gb_gpu;


/**
 * Allocates and initializes a GameBoy GPU
 * @return An instance of the GameBoy GPU
 */
gb_gpu* gb_gpu_create();

/**
 * Destroy a GameBoy GPU instance
 * @param gpu The GameBoy GPU instance to destroy
 */
void gb_gpu_destroy(gb_gpu* gpu);

/**
 * Perform one tick of the GPU
 * @param gameboy An instance of a GameBoy
 */
void gb_gpu_tick(gb_gameboy* gameboy, uint8_t cycles);

/**
 * Renders one scanline of the GameBoy screen
 * @param gameboy An instance of a GameBoy
 */
void _gb_gpu_render_scanline(gb_gameboy* gameboy);

/**
 * Load one line of a tile from vram into a local buffer
 * @param gameboy       An instance of a GameBoy
 * @param tile_row      The local buffer to load the line into
 * @param map_entry_idx The index of the tile in the tile map
 * @param scanline      The current scanline
 * @param bg_tiles_base The base address of the tileset
 * @param bg_map_base   The base address of the tilemap
 */
void _gb_gpu_load_tile_row(gb_gameboy* gameboy, uint8_t tile_row[], int map_entry_idx, int y, uint16_t bg_tiles_base, uint16_t bg_map_base);

/**
 * Parse a palette register to a mapping array
 * @param reg    The register to parse
 * @param buffer The array to write the mapping to
 */
void _gb_gpu_load_palette(uint8_t reg, uint8_t buffer[]);

#endif /* end of include guard: GPU_H__ */
