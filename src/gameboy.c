/**
 * Implementation of the GameBoy
 *
 * @author Brent Chesny
 */
#include "gameboy.h"
#include "error.h"

#include <stdio.h>
#include <time.h>

/* Public functions */

gb_gameboy* gb_gameboy_create()
{
  gb_gameboy* gameboy = (gb_gameboy*) malloc(sizeof(gb_gameboy));

  gameboy->cpu = gb_cpu_create();
  gameboy->mmu = gb_mmu_create();
  gameboy->gpu = gb_gpu_create();

  gb_gameboy_init_window(gameboy, "GameBoy");
  atexit(gb_gameboy_cleanup_window);

  return gameboy;
}

void gb_gameboy_init_window(gb_gameboy* gameboy, char *title)
{
  // Initialise SDL Video
  if (SDL_Init(SDL_INIT_VIDEO) < 0)
  {
    gb_err_panic(NULL, "Could not initialize SDL: %s", SDL_GetError());
  }

  // Create screen
  gameboy->screen = SDL_SetVideoMode(SCREEN_WIDTH * SCREEN_SCALE, SCREEN_HEIGHT * SCREEN_SCALE, 0, SDL_HWPALETTE);
  if (gameboy->screen == NULL)
  {
    gb_err_panic(NULL, "Couldn't set screen mode to 160 x 144: %s", SDL_GetError());
  }

  // Set the screen title
  SDL_WM_SetCaption(title, NULL);
}

void gb_gameboy_start(gb_gameboy* gameboy)
{
  while (1)
	{
		// Grab input from window
		gb_gameboy_input(gameboy);

		clock_t start = clock();

		// Run one frame worth of cpu cycles
		gb_cpu_run_frame(gameboy);

		// Refresh screen
		SDL_Flip(gameboy->screen);

		clock_t end = clock();
		double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC * 1000;

		// Sleep for a bit
		if (cpu_time_used < 16)
		{
			SDL_Delay(16 - cpu_time_used);
		}
	}
}

void gb_gameboy_destroy(gb_gameboy* gameboy)
{
  gb_cpu_destroy(gameboy->cpu);
  gb_mmu_destroy(gameboy->mmu);
  gb_gpu_destroy(gameboy->gpu);
  gb_gameboy_cleanup_window();

  free(gameboy);
}

void gb_gameboy_insert_cartridge(gb_gameboy* gameboy, gb_cartridge* cartridge)
{
  gameboy->cartridge = cartridge;
}

void gb_gameboy_cleanup_window()
{
	SDL_Quit();
}

void gb_gameboy_input(gb_gameboy* gameboy)
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
