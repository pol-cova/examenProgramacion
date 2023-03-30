//
// Created by Paul Contreras on 30/03/23.
//
/*
 * Elabore un código que muestre un menú con las siguientes opciones:

1. Suma de dos números.

2. Multiplicación de dos números.

3. Resta de dos números.

4. Salir.
El programa debe permitir seleccionar cualquiera de las opciones y solo terminar cuando se ordene salir a través
de la opción 4. Utilice instrucciones de control selectivas y repetitivas.
 */

// Incluimos las librerías estándar
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Creamos una función para el menu
void menu(){
    printf("----------------------\n");
    printf("|       MENU         |\n");
    printf("----------------------\n");
    printf("| 1. Suma de dos números|\n");
    printf("| 2. Multiplicación de dos números|\n");
    printf("| 3. Resta de dos números|\n");
    printf("| 4. Salir|\n");
}

// En la función principal es donde ira el programa
int main(){

    /*
     * Definimos las variables que servirán de contenedores para almacenar los números que ingrese el usuario:
     * en este caso flotantes, puesto que no se sabe si el usuario ingresara valores con decimales.
     */
    float userNumber_1, userNumber_2;
    // Definimos como entero el contenedor para que el usuario almacene la selección del menú
    int userSelection;

    // Definimos el idioma con el que trabajamos con ayuda de la librería <locale.h>
    setlocale(LC_CTYPE, "SPANISH");

    // Definimos una variable de control que mantenga en un loop, nuestra aplicación
    int myApp = 1; // 1 hace referencia a "true", mientras esta variable valga 1 la app se ejecutara

    /* Ejecutamos un ciclo do while para imprimir el menú una vez y repetirlo, cuantas veces el usuario
     * quiera.
    */
    do {
        menu();
        printf("Selecciona una opción: ");
        scanf("%d", &userSelection);

        // Usamos un switch para validar la selección
        switch (userSelection) {
            case 1:
                printf("\n---------------------------------\n");
                printf("| USTED SELECCIONO LA OPCIÓN %d SUMA |\n", userSelection);
                printf("Ingrese un número: ");
                scanf("%f", &userNumber_1);
                printf("Ingrese otro número: ");
                scanf("%f", &userNumber_2);
                printf("---------------------------------\n");
                printf("El resultado de la suma de %.2f  + %.2f = %.2f", userNumber_1,userNumber_2,userNumber_1 + userNumber_2);
                break;
            case 2:
                printf("\n---------------------------------\n");
                printf("| USTED SELECCIONO LA OPCIÓN %d MULTIPLICACIÓN |\n", userSelection);
                printf("Ingrese un número: ");
                scanf("%f", &userNumber_1);
                printf("Ingrese otro número: ");
                scanf("%f", &userNumber_2);
                printf("---------------------------------\n");
                printf("El resultado de la multiplicación de %.2f  x  %.2f = %.2f", userNumber_1,userNumber_2,userNumber_1 * userNumber_2);
                break;
            case 3:
                printf("\n---------------------------------\n");
                printf("| USTED SELECCIONO LA OPCIÓN %d RESTA |\n", userSelection);
                printf("Ingrese un número: ");
                scanf("%f", &userNumber_1);
                printf("Ingrese otro número: ");
                scanf("%f", &userNumber_2);
                printf("---------------------------------\n");
                printf("El resultado de la resta de %.2f  - %.2f = %.2f", userNumber_1,userNumber_2,userNumber_1 - userNumber_2);
                break;
            case 4:
                printf("---------------------------------\n");
                printf("USTED A SELECCIONADO SALIR \n");
                printf("Desarrollado por @paul \n");
                printf("Gracias por usar!");
                // Reasigna el valor a la variable de control, y finaliza el loop.
                myApp = 0;
                break;
            default:
                printf("Esta opción no existe, prueba otra! :)");
        }
    } while (myApp == 1);

    system("pause");
    return 0;
}