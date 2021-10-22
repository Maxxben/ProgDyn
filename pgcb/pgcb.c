#include <stdio.h>
#include <stdlib.h>
#include "pgcb.h"

//
// Created by maxxben on 22/10/2021.
//

int makeMatrice(int matrice[]){

    int *matrice = malloc(sizeof(int)*100);
    for (int i = 0; i < 5; i++) {
        for (int i = 0; i < 5; i++) {
            matrice[i] = rand() % 2;
            if (matrice[i] == 0) {
                printf("*   ");
                //printf("%d ", matrice[i][j]);
            } else {
                printf("    ");
            }
        }
        printf("\n");
    }
}


void printMatrice(int matrice[100]){
    for (int i = 0; i < 5; i++) {

        if(matrice[i] == 1){
            printf("%d  ",matrice[i]);
            break;
        }
    }

}