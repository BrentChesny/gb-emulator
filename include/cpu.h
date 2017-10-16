/**
 * Definition of the GameBoy CPU
 *
 * @author Brent Chesny
 */
#ifndef CPU_H__
#define CPU_H__

#include <stdint.h>
#include <pthread.h>

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

  // Thread handle
  pthread_t thread;

  // Last instructions
  uint8_t last_instruction;
  uint8_t last_bit_instruction;
} gb_cpu;


/**
 * Allocates and initializes a GameBoy CPU
 * @return An instance of the GameBoy CPU
 */
gb_cpu* gb_cpu_create();

/**
 * Starts running the specified GameBoy CPU in a new thread
 * @param gameboy The GameBoy instance to run on
 */
void gb_cpu_run(gb_gameboy* gameboy);

/**
 * Destroy a GameBoy CPU instance
 * @param cpu The GameBoy CPU instance to destroy
 */
void gb_cpu_destroy(gb_cpu* cpu);

/**
 * Internal private method that is called by the thread created in gb_cpu_run
 * @param gameboy The GameBoy instance to run on
 */
void* _gb_cpu_run(void* gameboy);

/**
 * Resets the CPU registers
 * @param cpu The GameBoy CPU instance to reset
 */
void _gb_cpu_reset(gb_cpu* cpu);



#endif /* end of include guard: CPU_H__ */
