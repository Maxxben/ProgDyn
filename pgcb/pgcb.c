#include <stdio.h>
#include <stdlib.h>
#include "pgcb.h"

//
// Created by maxxben on 22/10/2021.
//

/**
 * Array creation
 * @return matrice
 */
int *makeMatrice(){

    int *matrice = malloc(sizeof(int)*100);

        for (int i = 0; i < 25; i++) {
            matrice[i] = rand() % 2;
            if (matrice[i] == 0) {
                //printf("*   ");
            } else {
                //printf("_   ");
            }

        //printf("\n");
        matrice[26]='\0';
    }
    return matrice;
}

/**
 * Print the array
 * @param *matrice The array
 */
void printMatrice(int *matrice){

    int x = 0;

    for (int i = 0; i <5 ; ++i) {
        for (int j = 0; j < 5; ++j) {
            if(matrice[x] == 0){
                printf("*   ");
            }
            else {
                printf("_   ");
            }
            x=x+1;
        }
        printf("\n");
    }

}

void findMatrice(int *matrice) {

    int x = 0;

    for (int i = 0; i <5 ; ++i) {

        if (matrice[x] == 0)
            PGCB(x, y) = 0

        if((x,y) == 1 && et dans la première ligne en haut || la première colonne à gauche)
            PGCB(x,y)=1

        if((x,y) == 1 && ni dans la première ligne en haut ni dans la première colonne à gauche)
            PGCB(x, y) = 1 + min{ PGCB(x - 1, y - 1), PGCB(x, y - 1), PGCB(x - 1, y) }

    }
}