/**
 * Error handling functions for the GameBoy emulator
 *
 * @author Brent Chesny
 */
#ifndef ERROR_H__
#define ERROR_H__

typedef enum {
  GB_VERBOSITY_LOW = 10,
  GB_VERBOSITY_MED = 20,
  GB_VERBOSITY_HIGH = 30,
} gb_err_verbosity;

/**
 * Forward declaration of gb_gameboy
 */
typedef struct gb_gameboy gb_gameboy;

void gb_err_panic(gb_gameboy* gameboy, const char *fmt, ...);

void gb_err_error(gb_gameboy* gameboy, const char *fmt, ...);

void gb_err_debug(gb_gameboy* gameboy, const char *fmt, ...);

void gb_err_info(gb_gameboy* gameboy, const char *fmt, ...);

#endif /* end of include guard: ERROR_H__ */
