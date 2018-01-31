#include <SDL2/SDL.h>

typedef struct Turtle {
	SDL_Renderer *renderer;
	int posX;
	int posY;
	float angle;
	void (*move)(struct Turtle* this, int length);
	void (*rotate)(struct Turtle* this, float angle);
	void (*free)(struct Turtle* this);
} Turtle;

Turtle* newTurtle(SDL_Renderer *renderer, int posX, int posY);

void __Turtle__move(Turtle* this, int length);

void __Turtle__rotate(Turtle* this, float angle);

void __Turtle__free(Turtle* this);
