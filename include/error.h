/**
 * Error handling functions for the GameBoy emulator
 *
 * @author Brent Chesny
 */
#ifndef ERROR_H__
#define ERROR_H__

#include "gameboy.h"

void gb_err_panic(gb_gameboy* gameboy, const char *fmt, ...);

void gb_err_debug(gb_gameboy* gameboy, const char *fmt, ...);

#endif /* end of include guard: ERROR_H__ */
