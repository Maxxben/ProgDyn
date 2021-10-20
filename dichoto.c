#include <stdio.h>
#include "dichoto.h"
//
// Created by maxxben on 20/10/2021.
//

int gretter(int array[], int size_t) {
    for (int i = size_t / 2; i < size_t; i++) {
        int j = 1;
        array[i] = array[j];
        j = j + 1;

        printf("%d ", array[i + 1]);
    }
}

int lower(int array[], int size_t) {
    for (int i = 0; i < size_t / 2; i++) {
        int j = 1;
        array[i] = array[j];
        j = j + 1;

        printf("%d ", array[i + 1]);
    }
}

void find_by_dichotomy(int array[], int size_t, int value){

    if(value == array[size_t/2]) {
        printf("Valeur trouvée !");
    }

        if (value > array[size_t / 2]) {
            gretter(array, size_t);

        } else {
            lower(array, size_t);
            }
    }