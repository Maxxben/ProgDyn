#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dichoto.h"

#define MAX 100
#define SIZE 11

int valeur(char *array){

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++){
        array[i] = rand()%MAX;
        //printf("%d ", array[i]);
    }
}

int main() {

    find_by_dichotomy();

    int val;
    char array[100];
    valeur(array);

    printf("Choisir un nombre a rechercher : ");
    scanf("%d", val);

    if (array[SIZE/2] > val){

    }else{

    }

    printf("\n%d",array[SIZE/2]);

}