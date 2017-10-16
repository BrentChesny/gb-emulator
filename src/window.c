#include "window.h"
#include "gameboy.h"


gb_window* gb_window_create()
{
	gb_window* window = (gb_window*) malloc(sizeof(gb_window));

	gb_window_init(window, "GameBoy Emulator");
	atexit(gb_window_cleanup);

	return window;
}

void gb_window_init(gb_window* window, char *title)
{
	// Initialise SDL Video
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("Could not initialize SDL: %s\n", SDL_GetError());
		exit(1);
	}

	// Create screen
	window->screen = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, 0, SDL_HWPALETTE);
	if (window->screen == NULL)
	{
		printf("Couldn't set screen mode to 160 x 144: %s\n", SDL_GetError());
		exit(1);
	}

	// Set the screen title
	SDL_WM_SetCaption(title, NULL);
}

void gb_window_show(gb_gameboy* gameboy)
{
	while (1)
	{
		gb_window_input();

		SDL_LockSurface(gameboy->window->screen);

		uint32_t* p_screen = (uint32_t*) gameboy->window->screen->pixels;
		for (size_t i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; i++) {
			uint8_t val = gameboy->gpu->buffer[i / SCREEN_WIDTH][i % SCREEN_HEIGHT];
			*p_screen = SDL_MapRGBA(gameboy->window->screen->format, val, val, val, 0xFF);
			p_screen++;
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

void gb_window_draw(gb_window* window, uint8_t** buffer)
{
	// SDL_LockSurface(window->screen);
	//
	// uint32_t* p_screen = (uint32_t*) window->screen->pixels;
	// for (size_t i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; i++) {
	// 	uint8_t val = buffer[i / SCREEN_WIDTH][i % SCREEN_HEIGHT];
	// 	*p_screen = SDL_MapRGBA(window->screen->format, val, val, val, 0xFF);
	// 	p_screen++;
	// }
	//
  // SDL_UnlockSurface(window->screen);
	// SDL_Flip(window->screen);
}
