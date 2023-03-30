//
// Created by Paul Contreras on 30/03/23.
//
/*
 * Exam exercise
 * Seleccione las expresiones cuyo resultado sea verdadero.
 * Considere que p = 5, a = 0, h = 4
 */

#include <stdio.h>


int main(){

    int p=5, a=0, h=4;

    printf("%d\n", a < 5);
    printf("%d\n", p > a);
    printf("%d\n", !(!a));
    printf("%d\n", a>p);
    printf("%d\n", p>a && p>h);

    return 0;
}
