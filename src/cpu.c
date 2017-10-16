/**
 * Implementation of the GameBoy CPU
 *
 * @author Brent Chesny
 */
#include "cpu.h"
#include "gpu.h"
#include "ops.h"
#include "error.h"

#include <stdio.h>
#include <stdlib.h>

/* Public functions */

gb_cpu* gb_cpu_create()
{
  gb_cpu* cpu = (gb_cpu*) malloc(sizeof(gb_cpu));
  _gb_cpu_reset(cpu);
  return cpu;
}


void gb_cpu_run(gb_gameboy* gameboy)
{
  int error = pthread_create(&gameboy->cpu->thread, NULL, _gb_cpu_run, (void*) gameboy);
  if (error)
  {
    gb_err_panic(gameboy, "pthread_create() returned errorcode: %d", error);
  }
}

void gb_cpu_destroy(gb_cpu* cpu)
{
  pthread_cancel(cpu->thread);
  free(cpu);
}

/* Private functions */

void* _gb_cpu_run(void* gameboy)
{
  gb_gameboy* gb = (gb_gameboy*) gameboy;
  while (1) {
    if (gb->cpu->pc == 0x100) while(1) {}

    // 1. Fetch new instruction
    gb->cpu->last_instruction = gb_mmu_rb(gb, gb->cpu->pc);
    // gb_err_debug(gb, "Instruction: 0x%04x", gb->cpu->last_instruction);
    // gb_err_debug(gb, "Program counter: 0x%04x", gb->cpu->pc);

    // 2. Increase program counter
    gb->cpu->pc++;


    // 3. Decode and execute instruction
    gb_ops[gb->cpu->last_instruction](gb);

    // 4. Execute GPU tick
    gb_gpu_tick(gb, gb->cpu->m);
  }
}

void _gb_cpu_reset(gb_cpu* cpu)
{
  cpu->a = 0x00;
  cpu->f = 0x00;
  cpu->b = 0x00;
  cpu->c = 0x00;
  cpu->d = 0x00;
  cpu->e = 0x00;
  cpu->h = 0x00;
  cpu->l = 0x00;
  cpu->sp = 0x0000;
  cpu->pc = 0x0000;
  cpu->m = 0x0000;
  cpu->t = 0x0000;
}
