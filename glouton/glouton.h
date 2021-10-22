//
// Created by maxxben on 21/10/2021.
//

#ifndef PROGDYN_GLOUTON_H
#define PROGDYN_GLOUTON_H


typedef struct {
    float valeur;
    float volume;
}glout;

float remplissage(glout tab[],int array_size,int volMax);
void tri_selection(glout tab[], int size);

void test_glouton();

#endif //PROGDYN_GLOUTON_H
