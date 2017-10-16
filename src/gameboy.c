/**
 * Implementation of the GameBoy
 *
 * @author Brent Chesny
 */
#include "gameboy.h"

#include <stdio.h>

/* Public functions */

gb_gameboy* gb_gameboy_create()
{
  gb_gameboy* gameboy = (gb_gameboy*) malloc(sizeof(gb_gameboy));

  gameboy->cpu = gb_cpu_create();
  gameboy->mmu = gb_mmu_create();
  gameboy->gpu = gb_gpu_create();
  gameboy->window = gb_window_create();

  return gameboy;
}

void gb_gameboy_start(gb_gameboy* gameboy)
{
  // Start the CPU
  gb_cpu_run(gameboy);

  // Show the window
  gb_window_show(gameboy);
}

void gb_gameboy_destroy(gb_gameboy* gameboy)
{
  gb_cpu_destroy(gameboy->cpu);
  gb_mmu_destroy(gameboy->mmu);
  gb_gpu_destroy(gameboy->gpu);
  gb_window_destroy(gameboy->window);

  free(gameboy);
}

void gb_gameboy_insert_cartridge(gb_gameboy* gameboy, gb_cartridge* cartridge)
{
  gameboy->cartridge = cartridge;
}
