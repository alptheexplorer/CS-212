//
// Created by Alp-Admin on 23/02/2021.
//

#include "stdio.h"

int main(void) {

    int age;
    int annee = 2021;

    printf("Quel age avez-vous ?");
    scanf("%d", &age);

    annee -= age;

    printf("Vous etes ne vers %d", annee );
}
