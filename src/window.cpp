#include "engine.hpp"

void window::window_init () {
	window = SDL_CreateWindow("Sonic Extended Genesis", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_OPENGL);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}