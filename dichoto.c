#include <stdio.h>
#include "dichoto.h"
//
// Created by maxxben on 20/10/2021.
//

int gretter(int array[], int size_t) {
    int j=0;
    for (int i = size_t/2+1; i<size_t; i++) {
        array[j] = array[i];
        printf("%d ", array[i]);
        j++;
    }
    return 0;
}


int find_by_dichotomy(int array[], int size_t, int value) {

    int i;
    printf("\n");

    for (i=0;i<5;i++){
        if (value == size_t/2) {
                printf("Valeur trouvée !");
                i = 5;
        }else{
            if (value > size_t/2) {
                    printf("Val %d,%d\n",array[size_t],array[size_t/2]);
                gretter(array, size_t);
                size_t = size_t/2;
                //printf("= %d",size_t);

            }else{
                size_t = size_t/2;
            }
        }
        printf("\n");
    }
    return 0;
}