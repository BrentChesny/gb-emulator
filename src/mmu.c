#include "mmu.h"
#include "bios.h"
#include "error.h"
#include "gameboy.h"

#include <stdlib.h>


gb_mmu* gb_mmu_create()
{
  gb_mmu* mmu = (gb_mmu*) malloc(sizeof(gb_mmu));
  mmu->bios_disabled = 0;
  return mmu;
}

void gb_mmu_destroy(gb_mmu* mmu)
{
  free(mmu);
}

uint8_t gb_mmu_rb(gb_gameboy* gameboy, uint16_t addr)
{
  // BIOS
  if (addr < 0x100 && !gameboy->mmu->bios_disabled)
  {
    return BIOS_BINARY[addr];
  }
  // Cartridge ROM
  else if (0x0000 <= addr && addr < 0x8000)
  {
    return gameboy->cartridge->rom[addr];
  }
  // VRAM
  else if (0x8000 <= addr && addr < 0xA000)
  {
    return gameboy->gpu->vram[addr & 0x1FFF];
  }
  // Internal RAM/Echo RAM
  else if (0xC000 <= addr && addr < 0xFE00)
  {
    return gameboy->mmu->wram[addr & 0x1FFF];
  }
  // I/O
  else if (0xFF00 <= addr && addr < 0xFF4C)
  {
    if (addr == 0xFF00)
    {
      if (gameboy->joypad_col == 0x10)
      {
        return gameboy->joypad_rows[0];
      }
      else if (gameboy->joypad_col == 0x20)
      {
        return gameboy->joypad_rows[1];
      }
    }
    else if (addr == 0xFF01 || addr == 0xFF02)
    {
      gb_err_info(gameboy, "Unhandled read from serial register 0x%04x", addr);
      return 0;
    }
    else if (addr == 0xFF0F)
    {
      return gameboy->mmu->triggered_interrupts;
    }
    else if (0xFF10 <= addr && addr < 0xFF40)
    {
      //gb_err_debug(gameboy, "Unhandled read from sound register 0x%04x", addr);
      return 0;
    }
    else if ((addr & 0xFF40) == 0xFF40)
    {
      return gameboy->gpu->registers[addr - 0xFF40];
    }
    return 0;
  }
  // BIOS Flag
  else if (addr == 0xFF50)
  {
    return gameboy->mmu->bios_disabled;
  }
  // Zero-Page RAM
  else if (0xFF80 <= addr)
  {
    if (addr == 0xFFFF)
    {
      return gameboy->mmu->enabled_interrupts;
    }
    return gameboy->mmu->zram[addr & 0x7F];
  }

  gb_err_panic(gameboy, "Unhandled read byte at address 0x%04x", addr);
  return 0;
}

void gb_mmu_wb(gb_gameboy* gameboy, uint16_t addr, uint8_t val)
{
  // BIOS
  if (addr < 0x100 && !gameboy->mmu->bios_disabled)
  {
    gb_err_panic(gameboy, "Trying to write into BIOS rom at address 0x%04x", addr);
    return;
  }
  // CARTRIDGE ROM
  else if (addr < 0x8000)
  {
    gb_err_debug(gameboy, "Unhandled write to cartridge rom at address 0x%04x", addr);
    return;
  }
  // VRAM
  else if (0x8000 <= addr && addr < 0xA000)
  {
    gameboy->gpu->vram[addr & 0x1FFF] = val;
    return;
  }
  // Internal RAM/Echo RAM
  else if (0xC000 <= addr && addr < 0xFE00)
  {
    gameboy->mmu->wram[addr & 0x1FFF] = val;
    return;
  }
  // Sprite attribute memory (OAM)
  else if (0xFE00 <= addr && addr < 0xFEA0)
  {
    gameboy->gpu->oam[addr - 0xFE00] = val;
    return;
  }
  // Unused memory, ignore
  else if (0xFEA0 <= addr && addr < 0xFF00)
  {
    return;
  }
  // I/O
  else if (0xFF00 <= addr && addr < 0xFF4C)
  {
    if (addr == 0xFF00)
    {
      gameboy->joypad_col = val & 0x30;
      return;
    }
    else if (addr == 0xFF01 || addr == 0xFF02)
    {
      gb_err_info(gameboy, "Unhandled write to serial register 0x%04x", addr);
      return;
    }
    else if (addr == 0xFF0F)
    {
      gameboy->mmu->triggered_interrupts = val;
      return;
    }
    else if (0xFF10 <= addr && addr < 0xFF40)
    {
      //gb_err_debug(gameboy, "Unhandled write to sound register 0x%04x", addr);
      return;
    }
    else if ((addr & 0xFF40) == 0xFF40)
    {
      gameboy->gpu->registers[addr - 0xFF40] = val;
      return;
    }
    return;
  }
  else if (addr == 0xFF50)
  {
    gameboy->mmu->bios_disabled = val;
    return;
  }
  // Unused memory, ignore
  else if (0xFF51 <= addr && addr < 0xFF80)
  {
    return;
  }
  // Zero-Page RAM
  else if (0xFF80 <= addr)
  {
    if (addr == 0xFFFF)
    {
      gameboy->mmu->enabled_interrupts = val;
      return;
    }
    gameboy->mmu->zram[addr & 0x7F] = val;
    return;
  }

  gb_err_panic(gameboy, "Unhandled write byte at address 0x%04x", addr);
}

uint16_t gb_mmu_rw(gb_gameboy* gameboy, uint16_t addr)
{
  return gb_mmu_rb(gameboy, addr) + (gb_mmu_rb(gameboy, addr+1) << 8);
}

void gb_mmu_ww(gb_gameboy* gameboy, uint16_t addr, uint16_t val)
{
   gb_mmu_wb(gameboy, addr, val & BYTE_MASK);
   gb_mmu_wb(gameboy, addr + 1, val >> 8);
}
