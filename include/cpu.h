/**
 * Definition of the GameBoy CPU
 *
 * @author Brent Chesny
 */
#ifndef CPU_H__
#define CPU_H__

#include "defs.h"

#include <stdint.h>

#define VBLANK_INTERRUPT_FLAG 0x01
#define LCDSTAT_INTERRUPT_FLAG 0x02
#define TIMER_INTERRUPT_FLAG 0x04
#define SERIAL_INTERRUPT_FLAG 0x08
#define JOYPAD_INTERRUPT_FLAG 0x10

/**
 * Forward declaration of gb_gameboy
 */
typedef struct gb_gameboy gb_gameboy;


/**
 * Type definition of the GameBoy CPU struct
 */
typedef struct gb_cpu {
  uint8_t a;
  uint8_t f;
  uint8_t b;
  uint8_t c;
  uint8_t d;
  uint8_t e;
  uint8_t h;
  uint8_t l;
  uint16_t sp;
  uint16_t pc;

  // The following registers are not actually part of the CPU
  // but we use them to help keep track of timing
  uint16_t m;
  uint16_t t;
  uint32_t m_clock;
  uint32_t t_clock;

  // Last instructions
  uint8_t last_instruction;
  uint8_t last_bit_instruction;

  bool interrupts_enabled;
} gb_cpu;


/**
 * Allocates and initializes a GameBoy CPU
 * @return An instance of the GameBoy CPU
 */
gb_cpu* gb_cpu_create();

/**
 * Run one frame worth of GameBoy CPU instructions
 * @param gameboy The GameBoy instance to run on
 */
void gb_cpu_run_frame(gb_gameboy* gameboy);

/**
 * Destroy a GameBoy CPU instance
 * @param cpu The GameBoy CPU instance to destroy
 */
void gb_cpu_destroy(gb_cpu* cpu);

/**
 * Resets the CPU registers
 * @param cpu The GameBoy CPU instance to reset
 */
void _gb_cpu_reset(gb_cpu* cpu);

/**
 * Run the necessary interrupt routines that have been triggered
 * @param gameboy The GameBoy instance to run on
 */
void _gb_cpu_handle_interrupts(gb_gameboy* gameboy);



#endif /* end of include guard: CPU_H__ */
