#include "mmu.h"
#include "bios.h"
#include "error.h"

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
  if (addr <= 0x100 && !gameboy->mmu->bios_disabled)
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
    if (0xFF10 <= addr && addr < 0xFF40)
    {
      gb_err_debug(gameboy, "Unhandled read from sound register 0x%04x", addr);
      return 0;
    }
    else if ((addr & 0xFF40) == 0xFF40)
    {
      return gameboy->gpu->registers[addr - 0xFF40];
    }
  }
  // BIOS Flag
  else if (addr == 0xFF50)
  {
    return gameboy->mmu->bios_disabled;
  }
  // Zero-Page RAM
  else if (0xFF7F <= addr)
  {
    return gameboy->mmu->zram[addr & 0x7F];
  }

  gb_err_panic(gameboy, "Unhandled read byte at address 0x%04x", addr);
  return 0;
}

void gb_mmu_wb(gb_gameboy* gameboy, uint16_t addr, uint8_t val)
{
  // BIOS
  if (addr <= 0x100 && !gameboy->mmu->bios_disabled)
  {
    gb_err_panic(gameboy, "Trying to write into BIOS rom at address 0x%04x", addr);
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
  // I/O
  else if (0xFF00 <= addr && addr < 0xFF4C)
  {
    if (0xFF10 <= addr && addr < 0xFF40)
    {
      gb_err_debug(gameboy, "Unhandled write to sound register 0x%04x", addr);
      return;
    }
    else if ((addr & 0xFF40) == 0xFF40)
    {
      gameboy->gpu->registers[addr - 0xFF40] = val;
      return;
    }
  }
  // BIOS Flag
  else if (addr == 0xFF50)
  {
    gameboy->mmu->bios_disabled = val;
    return;
  }
  // Zero-Page RAM
  else if (0xFF7F <= addr)
  {
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
