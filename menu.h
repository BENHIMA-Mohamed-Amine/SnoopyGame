#include<stdio.h>
// show menu
int showMenu(){

    int option_jeu;
    printf("Hello to SNOOPY: MAGIC SHOW \n\n");
    printf("Options de jeu: \n");
    printf("1. Regles du jeu\n");
    printf("2. Lancer un nouveau Jeu\n");
    printf("3. Charger une partie\n");
    printf("4. Lancer directement un niveau\n");
    printf("5. Scores\n");
    printf("6. Quitter\n");
    do{
        printf("\nSaisir un chiffre: ");
        scanf("%d", &option_jeu);
    }while(option_jeu<=0 || option_jeu>6)

    return option_jeu;
}