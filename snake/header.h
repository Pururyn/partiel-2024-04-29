#pragma once
#include <SDL.h>

void setup(snake, food);
void snakeUpdate(struct SDL_Renderer* renderer, struct Snake* snake);

struct Snake {
    int x, y;
    int direction;
    int width, height;
    int size;
};