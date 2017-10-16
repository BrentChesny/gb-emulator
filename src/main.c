#include "gameboy.h"

int main(int argc, char *argv[])
{
	gb_cartridge* cartridge = gb_cartridge_create("resources/tetris.gb");

	gb_gameboy* gameboy = gb_gameboy_create();
	gb_gameboy_insert_cartridge(gameboy, cartridge);
	gb_gameboy_start(gameboy);

	gb_cartridge_destroy(cartridge);
	gb_gameboy_destroy(gameboy);

	return 0;
}
