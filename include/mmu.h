/**
 * Definition of the memory management unit of the GameBoy
 *
 * @author Brent Chesny
 */
#ifndef MMU_H__
#define MMU_H__

#include "defs.h"

#include <stdint.h>

#define ZRAM_SIZE 128
#define WRAM_SIZE 8192

/**
 * Forward declaration of gb_gameboy
 */
typedef struct gb_gameboy gb_gameboy;

/**
 * Type definition of the GameBoy memory management unit struct
 */
typedef struct gb_mmu {
  uint8_t bios_disabled;
  uint8_t zram[ZRAM_SIZE];
  uint8_t wram[WRAM_SIZE];
  uint8_t enabled_interrupts;
  uint8_t triggered_interrupts;
} gb_mmu;

/**
 * Allocates and initializes a GameBoy memory management unit
 * @return An instance of the GameBoy memory management unit
 */
gb_mmu* gb_mmu_create();

/**
 * Destroy a GameBoy memory management unit
 * @param cpu The GameBoy memory management unit to destroy
 */
void gb_mmu_destroy(gb_mmu* mmu);


uint8_t gb_mmu_rb(gb_gameboy* gameboy, uint16_t addr);

void gb_mmu_wb(gb_gameboy* gameboy, uint16_t addr, uint8_t val);

uint16_t gb_mmu_rw(gb_gameboy* gameboy, uint16_t addr);

void gb_mmu_ww(gb_gameboy* gameboy, uint16_t addr, uint16_t val);


#endif /* end of include guard: MMU_H__ */
