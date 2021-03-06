/**
 * Definition of the GameBoy CPU ops
 *
 * @author Brent Chesny
 */
#ifndef OPS_H__
#define OPS_H__

#include <stdio.h>
#include <stdlib.h>

#include "gameboy.h"

/**
 * Table with function pointers to the op implementations
 */
extern void (*gb_ops[]) (gb_gameboy* gameboy);

/**
 * Table with function pointers to the bit op implementations
 */
extern void (*gb_bit_ops[]) (gb_gameboy* gameboy);

/**
 * Interrupt service routines
 */
void RST40(gb_gameboy* gameboy);
void RST48(gb_gameboy* gameboy);
void RST50(gb_gameboy* gameboy);
void RST58(gb_gameboy* gameboy);
void RST60(gb_gameboy* gameboy);

#endif /* end of include guard: OPS_H__ */
