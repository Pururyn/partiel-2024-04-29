#include<stdio.h>
#include <SDL.h>
#include "header.h"

void setup(struct Snake* snake, struct Food* food) {
    snake->x = 100;
    snake->y = 100;
    snake->size = 0;
    snake->width = 20;
    snake->direction = 0;
    snake->height = 20;
    foodSetRandomPosition(food);
}

void snakeUpdate(struct SDL_Renderer* renderer, struct Snake* snake) {
    SDL_Rect rect = { snake->x, snake->y, snake->height, snake->width };
    SDL_SetRenderDrawColor(renderer, 80, 80, 80, 255);
    SDL_RenderDrawRect(renderer, &rect);
    SDL_RenderFillRect(renderer, &rect);
}