#include <math.h>
#include <SDL2/SDL.h>
#include "turtle.h"

Turtle* newTurtle(SDL_Renderer *renderer, int posX, int posY) {
	Turtle* turtle = malloc(sizeof(Turtle));
	turtle->renderer = renderer;
	turtle->posX = posX;
	turtle->posY = posY;
	turtle->angle = 0;
	turtle->move = __Turtle__move;
	turtle->rotate = __Turtle__rotate;
	turtle->free = __Turtle__free;
	return turtle;
}

void __Turtle__move(Turtle* this, int length) {
	int destX = this->posX + (int)(length * cos(this->angle));
	int destY = this->posY + (int)(length * sin(this->angle));
	SDL_RenderDrawLine(this->renderer, this->posX, this->posY, destX, destY);
	this->posX = destX;
	this->posY = destY;
}

void __Turtle__rotate(Turtle* this, float angle) {
	this->angle += M_PI * angle / 180;
}

void __Turtle__free(Turtle* this) {
	free(this);
}
