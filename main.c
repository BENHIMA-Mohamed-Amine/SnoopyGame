#include<stdio.h>
#include<stdlib.h>
#include "menu.h"
#include "characters.h"

#define taille_x 11
#define taille_y 22

int** get_game_board(){
    int** board;
    board = (int**)malloc(sizeof(int*)* taille_x);
    for(int i =0; i<taille_x; i++){
        board[i] = (int*)malloc(sizeof(int)* taille_y);
    }
}

void fill_board_borders(int **game_board){
    for(int i=0; i<taille_x; i++){
        for(int j=0; j<taille_y; j++){
            if((i==0 || j==0) ||(i==taille_x || j==taille_y)) game_board[i][j] = -1;
        }
    }
}

int main(){
    int** game_board = get_game_board();
    fill_board_borders(game_board);
    return 0;
}