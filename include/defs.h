/**
 * Defined constants useful for our GameBoy implementation
 *
 * @author Brent Chesny
 */
#ifndef DEFS_H__
#define DEFS_H__

typedef enum { false, true } bool;

#define HI_NIBBLE_MASK 0xF0
#define LO_NIBBLE_MASK 0x0F
#define HALF_BYTE_MASK 0x7F
#define BYTE_MASK 0xFF
#define WORD_MASK 0xFFFF

#define EXTEND_TO_WORD(X) (0xFF00 + (X & 0xFF))

#define NO_FLAG 0x00
#define ZERO_FLAG 0x80
#define SUBTRACT_FLAG 0x40
#define HALF_CARRY_FLAG 0x20
#define CARRY_FLAG 0x10

#endif /* end of include guard: DEFS_H__ */
