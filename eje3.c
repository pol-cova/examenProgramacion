//
// Created by Paul Contreras on 30/03/23.
//
/*
 * En el siguiente fragmento de código se imprimen los múltiplos del 5 que se encuentran entre 20 y 50.
 * El intervalo considera el 20 y el 50 (intervalo cerrado). Complete el código.
 */

#include <stdio.h>

int main(){

    int mult_5 = 20;

    while (mult_5 <= 50){
        printf("%d\n", mult_5);
        mult_5 = mult_5 + 5;
    }

    return 0;
}