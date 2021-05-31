#include "engine.hpp"

void object::draw (SDL_Renderer* &renderer) {
	SDL_RenderCopy (renderer, text, &tesrect, &rect);
}

void object::set_texture (SDL_Renderer* &renderer) {
	text = SDL_CreateTextureFromSurface(renderer, surf);
}
