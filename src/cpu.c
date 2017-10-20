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
    if (gameboy->cpu->log_instructions) {
      gb_err_debug(gameboy, "Instruction: 0x%04x\t\tProgram counter: 0x%04x", gameboy->cpu->last_instruction, gameboy->cpu->pc);
      gb_err_debug(gameboy, "Register A: 0x%02x", gameboy->cpu->a);
      // gb_err_debug(gameboy, "0x%02x", gameboy->mmu->zram[0xFF85 & 0x7F]);
    }

    // 2. Increase program counter
    gameboy->cpu->pc++;

    // 3. Decode and execute instruction
    gb_ops[gameboy->cpu->last_instruction](gameboy);

    // 4. Handle interrupts
    _gb_cpu_handle_interrupts(gameboy);

    // 5. Execute GPU tick
    gb_gpu_tick(gameboy, gameboy->cpu->m);

    // 6. Increase clock
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

  cpu->interrupts_enabled = true;
  cpu->log_instructions = false;
}

void _gb_cpu_handle_interrupts(gb_gameboy* gameboy)
{
  if (gameboy->cpu->interrupts_enabled && gameboy->mmu->enabled_interrupts && gameboy->mmu->triggered_interrupts)
  {
    uint8_t triggered = gameboy->mmu->enabled_interrupts & gameboy->mmu->triggered_interrupts;

    if(triggered & VBLANK_INTERRUPT_FLAG)
  	{
  	    gameboy->mmu->triggered_interrupts &= (BYTE_MASK - VBLANK_INTERRUPT_FLAG);
  	    RST40(gameboy);
  	}
    else if(triggered & LCDSTAT_INTERRUPT_FLAG)
  	{
  	    gameboy->mmu->triggered_interrupts &= (BYTE_MASK - LCDSTAT_INTERRUPT_FLAG);
  	    RST48(gameboy);
  	}
    else if(triggered & TIMER_INTERRUPT_FLAG)
  	{
  	    gameboy->mmu->triggered_interrupts &= (BYTE_MASK - TIMER_INTERRUPT_FLAG);
  	    RST50(gameboy);
  	}
    else if(triggered & SERIAL_INTERRUPT_FLAG)
  	{
  	    gameboy->mmu->triggered_interrupts &= (BYTE_MASK - SERIAL_INTERRUPT_FLAG);
  	    RST58(gameboy);
  	}
    else if(triggered & JOYPAD_INTERRUPT_FLAG)
  	{
  	    gameboy->mmu->triggered_interrupts &= (BYTE_MASK - JOYPAD_INTERRUPT_FLAG);
  	    RST60(gameboy);
  	}
  }
}
