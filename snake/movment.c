#include <stdio.h>
#include <SDL.h>
#include"header.h"
#define SPEED 25

SDL_Event event;

void snakePhysics(struct Snake* snake) {
    while (SDL_PollEvent(&event)) {
        switch (snake->direction) {
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym) {
            case SDLK_UP:
                snake->y -= SPEED;
                break;
            case SDLK_DOWN:
                snake->y += SPEED;
                break;
            case SDLK_LEFT:
                snake->x -= SPEED;
                break;
            case SDLK_RIGHT:
                snake->x += SPEED;
                break;
            }
        }
    }