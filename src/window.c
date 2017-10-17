#include "window.h"
#include "gameboy.h"
#include "error.h"

#include <time.h>


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

		clock_t start = clock();

		// Run one frame worth of cpu cycles
		gb_cpu_run_frame(gameboy);

		// Refresh screen
		SDL_Flip(gameboy->window->screen);

		clock_t end = clock();
		double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC * 1000;

		// Sleep for a bit
		if (cpu_time_used < 16)
		{
			SDL_Delay(16 - cpu_time_used);
		}
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
