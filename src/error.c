#include "error.h"

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

void gb_err_debug(gb_gameboy* gameboy, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  printf("[DEBUG] ");
  vprintf(fmt, args);
  printf("\n");
  va_end(args);
}
