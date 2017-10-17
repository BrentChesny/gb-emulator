/**
 * Definition of the GameBoy Emulator window.
 *
 * @author Brent Chesny
 */
#ifndef WINDOW_H__
#define WINDOW_H__

#include <stdio.h>
#include <stdlib.h>

#include <SDL/SDL.h>

#define SCREEN_SCALE 1
#define SCREEN_WIDTH 160
#define SCREEN_HEIGHT 144

/**
 * Forward declaration of gb_gameboy
 */
typedef struct gb_gameboy gb_gameboy;


/**
 * Type definition of the GameBoy window struct
 */
typedef struct gb_window {
  SDL_Surface *screen;
} gb_window;

gb_window* gb_window_create();
void gb_window_init(gb_window* window, char* title);
void gb_window_show(gb_gameboy* gameboy);
void gb_window_destroy(gb_window* window);
void gb_window_cleanup();
void gb_window_input();

#endif /* end of include guard: WINDOW_H__ */
