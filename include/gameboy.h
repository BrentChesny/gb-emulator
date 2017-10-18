/**
 * Definition of the GameBoy
 *
 * @author Brent Chesny
 */
#ifndef GAMEBOY_H__
#define GAMEBOY_H__

#include "cpu.h"
#include "mmu.h"
#include "gpu.h"
#include "cartridge.h"

#include <stdio.h>
#include <stdlib.h>

#include <SDL/SDL.h>

#define SCREEN_SCALE 1
#define SCREEN_WIDTH 160
#define SCREEN_HEIGHT 144

typedef struct gb_gameboy {
  gb_cpu* cpu;
  gb_mmu* mmu;
  gb_gpu* gpu;
  SDL_Surface *screen;

  // Weak references
  gb_cartridge* cartridge;
} gb_gameboy;

/**
 * Allocates and initializes an instance of the GameBoy
 * @return An instance of the GameBoy
 */
gb_gameboy* gb_gameboy_create();

/**
 * Run an instance of the GameBoy
 * @param The instance of the GameBoy that will be started
 */
void gb_gameboy_start(gb_gameboy* gameboy);

/**
 * Destroy an instance of the GameBoy
 * @param The instance of the GameBoy to destroy
 */
void gb_gameboy_destroy(gb_gameboy* gameboy);

void gb_gameboy_insert_cartridge(gb_gameboy* gameboy, gb_cartridge* cartridge);

void gb_gameboy_init_window(gb_gameboy* gameboy, char* title);
void gb_gameboy_cleanup_window();
void gb_gameboy_input(gb_gameboy* gameboy);

#endif /* end of include guard: GAMEBOY_H__ */
