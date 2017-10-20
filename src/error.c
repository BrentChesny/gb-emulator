#include "error.h"
#include "gameboy.h"

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void gb_err_panic(gb_gameboy* gameboy, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  printf("[PANIC] ");
  vprintf(fmt, args);
  printf("\n");
  if (gameboy !=  NULL)
  {
    printf("[PANIC] Program counter: 0x%04x\n", gameboy->cpu->pc);
  }
  printf("[PANIC] Exiting...\n");
  va_end(args);
  exit(1);
}

void gb_err_error(gb_gameboy* gameboy, const char *fmt, ...) {
  if (gameboy->verbosity < GB_VERBOSITY_LOW)
  {
    return;
  }
  va_list args;
  va_start(args, fmt);
  printf("[ERROR] ");
  vprintf(fmt, args);
  printf("\n");
  va_end(args);
}

void gb_err_debug(gb_gameboy* gameboy, const char *fmt, ...) {
  if (gameboy->verbosity < GB_VERBOSITY_MED)
  {
    return;
  }
  va_list args;
  va_start(args, fmt);
  printf("[DEBUG] ");
  vprintf(fmt, args);
  printf("\n");
  va_end(args);
}

void gb_err_info(gb_gameboy* gameboy, const char *fmt, ...) {
  if (gameboy->verbosity < GB_VERBOSITY_HIGH)
  {
    return;
  }
  va_list args;
  va_start(args, fmt);
  printf("[INFO] ");
  vprintf(fmt, args);
  printf("\n");
  va_end(args);
}
