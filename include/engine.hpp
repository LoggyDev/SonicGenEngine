#include <iostream>
#include <SDL2/sdl.h>
#include <math.h>
#include "window.hpp"

class engine {
public:
	void engine_limit_fps ();
	void engine_init ();	
	void engine_run (); 
	void engine_process_events ();

	window          window;
	SDL_Rect        rect;
	SDL_Rect        rect1;
    	SDL_Event       event;
	bool            running=1;

protected:
	const int       fps=60;
	const int       frameDelay=1000/fps;
	uint32_t        frameStart;
	int             frameTime;
};
