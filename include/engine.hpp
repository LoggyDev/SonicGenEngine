#include <iostream>
#include <SDL2/sdl.h>
#include <math.h>

#include "window.hpp"
#include "object.hpp"

class engine {
public:
	void engine_limit_fps ();
	void engine_init ();	
	void engine_run (); 
	void engine_process_events ();
	void engine_draw (); 
	void engine_update ();

	window          window;    // create an object of the window class...
	object          obj_test;  // create an test object...
    SDL_Event       event;         // create an event for input etc...
	bool            running=1; // bool for game loop...

	// variables for constant framerate...

	const int       fps=60;
	const int       frameDelay=1000/fps;
	uint32_t        frameStart;
	int             frameTime;
};
