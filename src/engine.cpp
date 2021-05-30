#include "engine.hpp"

void engine::engine_init () {
	window.window_init();
}

void engine::engine_limit_fps () {
	frameTime=SDL_GetTicks ()-frameStart;
	if(frameDelay > frameTime)
		SDL_Delay(frameDelay-frameTime);
}

void engine::engine_run () {
	while (running) {
		frameStart=SDL_GetTicks ();
		while (SDL_PollEvent (&event)) {
        	switch (event.type)
        	{
        		case (SDL_QUIT): running=0; break;
        	}
    	}
    	engine_process_events();
    	engine_limit_fps();
	}
}

void engine::engine_process_events () {

    SDL_RenderClear(window.renderer);
    
	SDL_RenderPresent(window.renderer);
}
