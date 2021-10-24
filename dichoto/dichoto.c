#include <stdio.h>
#include <stdlib.h>
#include "dichoto.h"
//
// Created by maxxben on 20/10/2021.
//

/**
 * Recherche par dichotomie dans un tableau d'entiers
 * @param array The array of values
 * @param size_t The size of the array
 * @param value The value to find
 * @return The position of the value found or -1
 */

int find_by_dichotomy(int array[], int size_t, int value ){

    //INITIALISATION
        int min = 0, max = size_t;
        int i;
        int tmp=1;

    while (min <= max) {
        i = (min + max)/2;
        if (array[i] == value) {
            printf("Trouvé en %d coups\n",tmp);
            return i;
        }
        if (array[i] < value) {
            min = i + 1;
        }else {
            max = i - 1;
        }
        tmp++;
    }
    printf("La valeur entrée n'est pas valide.\nChoisir une valeur entre : ]0;%d[\n",size_t);
    return -1;
}