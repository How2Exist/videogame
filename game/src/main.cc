#include <utility>

#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>

#include "core/app.hh"
#include "util/log.hh"

int main(int argc, char const *argv[]) {
	LOG("starting program...");
	SDL_Init(SDL_INIT_VIDEO);
	
	core::app_info info = {
		.gfx = {
			.wnd_dims = std::make_pair(800, 600),
			.wnd_title = "hello world",
		},
	};
	
	core::app(info).run();
	
	SDL_Quit();
	LOG("exiting program...");
	
	return 0;
}
