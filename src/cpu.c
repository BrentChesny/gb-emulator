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


void gb_cpu_run_frame(gb_gameboy* gameboy)
{
  uint32_t frame_clock = gameboy->cpu->m_clock + 17556;
  do {
    // 1. Fetch new instruction
    gameboy->cpu->last_instruction = gb_mmu_rb(gameboy, gameboy->cpu->pc);
    // gb_err_debug(gameboy, "Instruction: 0x%04x", gameboy->cpu->last_instruction);
    // gb_err_debug(gameboy, "Program counter: 0x%04x", gameboy->cpu->pc);

    // 2. Increase program counter
    gameboy->cpu->pc++;

    // 3. Decode and execute instruction
    gb_ops[gameboy->cpu->last_instruction](gameboy);

    // 4. Execute GPU tick
    gb_gpu_tick(gameboy, gameboy->cpu->m);

    // 5. Increase clock
    gameboy->cpu->m_clock += gameboy->cpu->m;
  } while(gameboy->cpu->m_clock < frame_clock);
}

void gb_cpu_destroy(gb_cpu* cpu)
{
  free(cpu);
}

/* Private functions */

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
  cpu->m_clock = 0x00000000;
  cpu->t_clock = 0x00000000;
}
