#ifndef LEVEL_H_
#define LEVEL_H_

#include "Item.h"
#include <stdlib.h>
#include <time.h>

// Define the dimensions of the board and bricks
#define LEVEL_WIDTH 12
#define LEVEL_HEIGHT 12
#define LEVEL_BRWIDTH 64
#define LEVEL_BRHEIGHT 24

class Brick {
public:
	int type;
	bool state;
};

class Level : public Item {
public:
	Level(SDL_Renderer* renderer);
	~Level();

	void Update(float delta);
	void Render(float delta);
	void CreateLevel();

	float brickoffsetx, brickoffsety;

	// Define the two-dimensional array of bricks
	Brick bricks[LEVEL_WIDTH][LEVEL_HEIGHT];

private:
	SDL_Texture* bricktexture;
	SDL_Texture* sidetexture;
};

#endif