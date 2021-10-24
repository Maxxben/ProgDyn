#include <stdio.h>
#include <stdlib.h>
#include "dichoto/dichoto.h"
#include "glouton/glouton.h"
#include "pgcb/pgcb.h"

int main(){

    //DICHOTOMIE
        printf("\n------------Dichotomie-----------------------------------\n\n");
        test_dichoto();

    //GLOUTON
        printf("\n------------Algorithme glouton---------------------------\n");
        test_glouton();

    //PGCB
        printf("\n------------Probleme du plus grand carré libre-----------\n\n");
        test_pgcb();
}