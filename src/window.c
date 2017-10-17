#include "window.h"
#include "gameboy.h"
#include "error.h"


gb_window* gb_window_create()
{
	gb_window* window = (gb_window*) malloc(sizeof(gb_window));

	gb_window_init(window, "GameBoy");
	atexit(gb_window_cleanup);

	return window;
}

void gb_window_init(gb_window* window, char *title)
{
	// Initialise SDL Video
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		gb_err_panic(NULL, "Could not initialize SDL: %s", SDL_GetError());
	}

	// Create screen
	window->screen = SDL_SetVideoMode(SCREEN_WIDTH * SCREEN_SCALE, SCREEN_HEIGHT * SCREEN_SCALE, 0, SDL_HWPALETTE);
	if (window->screen == NULL)
	{
		gb_err_panic(NULL, "Couldn't set screen mode to 160 x 144: %s", SDL_GetError());
	}

	// Set the screen title
	SDL_WM_SetCaption(title, NULL);
}

void gb_window_show(gb_gameboy* gameboy)
{
	while (1)
	{
		// Grab input from window
		gb_window_input();

		// Run one frame worth of cpu cycles
		gb_cpu_run_frame(gameboy);

		// Draw new frame
		SDL_LockSurface(gameboy->window->screen);
		size_t w = SCREEN_WIDTH * SCREEN_SCALE;
		size_t h = SCREEN_HEIGHT * SCREEN_SCALE;
		uint32_t* p_screen = (uint32_t*) gameboy->window->screen->pixels;
		for (size_t y = 0; y < h; y++) {
			for (size_t x = 0; x < w; x++) {
				uint8_t val = gameboy->gpu->buffer[y/SCREEN_SCALE][x/SCREEN_SCALE];
				uint32_t pixel = SDL_MapRGBA(gameboy->window->screen->format, val, val, val, 0xFF);
				p_screen[y * SCREEN_WIDTH * SCREEN_SCALE + x] = pixel;
			}
		}
	  SDL_UnlockSurface(gameboy->window->screen);
		SDL_Flip(gameboy->window->screen);

		// Sleep for a bit to stop SDL from sucking up all CPU time
		SDL_Delay(16);
	}
}

void gb_window_cleanup()
{
	SDL_Quit();
}

void gb_window_destroy(gb_window* window)
{
	free(window);
}


void gb_window_input()
{
	SDL_Event event;

	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
			case SDL_QUIT:
				exit(0);
			break;

			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
					case SDLK_ESCAPE:
						exit(0);
					break;

					default:
					break;
				}
			break;
		}
	}
}
