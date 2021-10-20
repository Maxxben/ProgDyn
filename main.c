#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dichoto.h"


int *getSortedTab(int size_t)
{
    int *tab = (int*) malloc(sizeof(int)*size_t);
    for (int i=1; i<=size_t; i++){
        tab[i] = i;
        printf("%d ",tab[i]);
    }
    return tab;
}

//void find_by_dichotomy(int array[100], int size_t, int value){

int main() {

    int size_t = 10;
    int value = 4;

    //printf("Choisir un nombre");
    //scanf("%d",&value);

    int *tab = getSortedTab(size_t);
        //printf("\n%d", tab[5]);

   find_by_dichotomy(tab,size_t,value);




}