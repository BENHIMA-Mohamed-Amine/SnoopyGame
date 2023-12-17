#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>

int main(int argc, char *argv[]) {
    // Start SDL
    if(SDL_Init(SDL_INIT_VIDEO)){
        printf("SDL_Init doesn't work.\n");
        exit(1);
    }
    // Start Game logic
    SDL_Surface *window=NULL;
    window = SDL_SetVideoMode(800, 800, 32, SDL_HWSURFACE);
    if(window == NULL){
        printf("window doesn't work.\n");
        exit(1);
    }
    while(1){
        SDL_Event event;
        SDL_WaitEvent(&event);
        if(event.type == SDL_QUIT){
            break;
        }
    }
    SDL_FreeSurface(window);
    // End Game logic
    // Quit SDL
    SDL_Quit();
    return 0;
}
