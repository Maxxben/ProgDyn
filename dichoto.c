#include <stdio.h>
#include "dichoto.h"
//
// Created by maxxben on 20/10/2021.
//

int gretter(int array[], int size_t) {
    for (int i = size_t / 2; i < size_t; i++) {
        int j = 1;
        array[i] = array[j];
        printf("%d ", array[i + 1]);
        j++;
    }
}

int find_by_dichotomy(int array[], int size_t, int value) {

    int find=0, i;
    printf("\n");

    for (i=0;i<6;i++){
        if (value == array[size_t/2]) {
            printf("Valeur trouvée !");
            i=10;
        }else {
            if (value > array[size_t / 2]) {
                gretter(array, size_t);
                size_t=size_t/2;
            } else {
                size_t=size_t/2;
            }
        }
        printf("\n");
    }
}