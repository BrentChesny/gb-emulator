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
#include "window.h"

typedef struct gb_gameboy {
  gb_cpu* cpu;
  gb_mmu* mmu;
  gb_gpu* gpu;
  gb_window* window;

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

#endif /* end of include guard: GAMEBOY_H__ */
