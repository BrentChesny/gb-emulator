/**
 * Implementation of the GameBoy cartridge
 *
 * @author Brent Chesny
 */
#include "cartridge.h"
#include "error.h"

#include <stdio.h>

/* Public functions */

gb_cartridge* gb_cartridge_create(char* filename)
{
  gb_cartridge* cartridge = (gb_cartridge*) malloc(sizeof(gb_cartridge));
  _gb_cartridge_load(cartridge, filename);
  return cartridge;
}


void gb_cartridge_destroy(gb_cartridge* cartridge)
{
  free(cartridge->rom);
  free(cartridge);
}

/* Private functions */

void _gb_cartridge_load(gb_cartridge* cartridge, char* filename)
{
  FILE* fp = fopen(filename, "rb");

  if (fp == NULL)
  {
    gb_err_panic(NULL, "Cartridge file could not be opened: %s", filename);
  }

  fseek(fp, 0, SEEK_END);
  cartridge->rom_size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  cartridge->rom = (uint8_t*) malloc(cartridge->rom_size);

  if (fread(cartridge->rom, sizeof(uint8_t), cartridge->rom_size, fp) != cartridge->rom_size)
  {
    gb_err_panic(NULL, "There was an error loading cartridge: %s", filename);
  }
}
