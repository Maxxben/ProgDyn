#include <stdio.h>
#include <stdlib.h>
#include "dichoto.h"
#include "glouton.h"
//
// Created by maxxben on 22/10/2021.
//

void Test_dichoto(glout tab[], int size){
    int size_t = 100;
    int value = 10;
    int *array = (int*) malloc(sizeof(int)*size_t);

    for (int i = 0; i < size_t ; i++) {
        array[i]=i;
    }
    int val = find_by_dichotomy(array,size_t,value);

    printf("Valeur recherchée : %d\n",val);
    printf("-----------------------\n");

}

void Test_glouton(glout tab[], int size){
    //INITIALISATION
    glout objets[5];
    glout param_1; param_1.volume = 6; param_1.valeur = 7;
    glout param_2; param_2.volume = 5; param_2.valeur = 5;
    glout param_3; param_3.volume = 5; param_3.valeur = 5;


    objets[0] = param_1;
    objets[1] = param_2;
    objets[2] = param_3;

    printf("\n");
    tri_selection(objets,3);

    //AFFICHAGE

    //for (int i = 0; i < 3; ++i) {
    //       printf("%d\n",objets[i].valeur/objets[i].volume);
    //  }
    printf("La valeur du sac est : %f\n", remplissage(objets,2,10));

}