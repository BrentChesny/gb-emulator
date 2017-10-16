/**
 * Cartridge to put in the GameBoy
 *
 * @author Brent Chesny
 */
#ifndef CARTRIDGE_H__
#define CARTRIDGE_H__

#include <stdint.h>
#include <stdlib.h>


/**
 * Type definition of the GameBoy cartridge struct
 */
typedef struct gb_cartridge {
  uint8_t* rom;
  size_t rom_size;
} gb_cartridge;


/**
 * Allocates and initializes a GameBoy cartridge
 * @return An instance of the GameBoy cartridge
 */
gb_cartridge* gb_cartridge_create(char* filename);

/**
 * Destroy a GameBoy cartridge
 * @param cartridge The GameBoy cartridge to destroy
 */
void gb_cartridge_destroy(gb_cartridge* cartridge);

/**
 * Load a cartridge rom from file
 * @param cartridge The cartridge to load into
 * @param filename The name of the file to read from
 */
void _gb_cartridge_load(gb_cartridge* cartridge, char* filename);


#endif /* end of include guard: CARTRIDGE_H__ */
