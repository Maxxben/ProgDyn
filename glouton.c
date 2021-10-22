#include <stdio.h>
#include <stdlib.h>
#include "glouton.h"

//
// Created by maxxben on 21/10/2021.
//

/**
 * Algorithme glouton
 * @param tab The array of values
 * @param size_t The size of the array
 * @param volumeMax The value to find
 * @return The value in the bag
 */

void tri_selection(glout tab[], int size){
    //initialisation
    int i=0, j=0;
    float tmp1=0,tmp2=0;


    //Fonction de tri selection
    for(i=0;i<size-1;i++){ //Boucle parcours le tableau
        for(j=i+1;j<size;j++) { //Boucle parcours le tableau non trié
            if (tab[i].valeur/tab[i].volume < tab[j].valeur/tab[j].volume) { //Swap
                tmp1 = tab[i].volume;
                tmp2 = tab[i].valeur;
                tab[i] = tab[j];
                tab[j].volume = tmp1;
                tab[j].valeur= tmp2;
            }
        }
    }
}

float remplissage(glout tab[],int size,int volumeSac){
    float result = 0;
    float volumeSac2 = volumeSac;
    for (int i = 0; i < size; ++i) {
        if(tab[i].volume<=volumeSac2){
            result += tab[i].valeur;
            volumeSac2 -= tab[i].volume;
        }
    }
    return result;
}