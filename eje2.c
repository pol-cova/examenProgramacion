//
// Created by Paul Contreras on 30/03/23.
//
/*
 *
 */
#include<stdio.h>



int main()

{

    int cant = 0, num, i;

    char symbol ;



    while ( cant++ < 4)
    {

        printf("\n Introduzca un valor: ");

        scanf( "%d" , &num);



        if (  num % 2 == 0) // es  par

            symbol  = '*' ;

        else

            symbol  = '!' ;



        printf("\n %d ", num);



        for ( i =1; i <= num ; i++)

            printf("%c", symbol);

    printf("\n");
}
    return 0;
}