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

/**
 * Print the largest free square
 * @param *matrice The array
 */
void findMatrice(int *matrice) {

}