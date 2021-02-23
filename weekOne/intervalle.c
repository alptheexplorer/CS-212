//
// Created by Alp-Admin on 23/02/2021.
//

#include <stdio.h>

int main(void) {
    double x = 0.0;                    /* déclaration et initialisation */
    printf("Entrez un réel : ");  /* demande à l'utilisateur d'entrer un réel */
    scanf("%lf", &x);             /* enregistre la réponse dans x */
    if(x>=-1 && x<1){
        printf("x appartient à I ");
    }else{
        printf("x n'appartient pas à I");
    }

    /*when comparing doubles, better to use  abs(x-y)<1e-12*/
    return 0;
}


