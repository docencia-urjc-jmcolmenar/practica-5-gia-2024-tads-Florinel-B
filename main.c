/*
 * Partiendo de este código, implementa las funciones del TAD ArrayPlus en los archivos arrayplustad.h
 * y arrayplustad.c.
 * Descomenta progresivamente el código del archivo main.c y comprueba que el programa funciona correctamente.
 */

#include "arrayplustad.h"
#include <stdio.h>
#include <stdlib.h>
#define TAM 7

/*
 * Programa para demostrar el uso del TAD ArrayPlus.
 */
int main() {
    //Crea el ArrayPlus vací
    int array[2] = {1,2};
    int *p = &array;
    arrayplustad *miArrayPlus = creaArrayPlus(TAM);
   /* anyadeElemento(miArrayPlus,12);
    anyadeArray(*miArrayPlus, p,2);
    imprimeArrayPlus(miArrayPlus);*/
    return 0;
}
/*
    // Rellena el ArrayPlus con valores individuales
    for (int i = 0; i < TAM; i++) {
        anyadeElemento(miArrayPlus, i);
    }

    // Muestra el contenido del ArrayPlus
    imprimeArrayPlus(miArrayPlus);

    // Vacía el array
    vaciaArrayPlus(miArrayPlus);

    // Añade varios elementos al ArrayPlus
    int arrayAux[] = {15, 64, 27, 99};
    anyadeArray(miArrayPlus, arrayAux, 4);

    // Añade un elemento al ArrayPlus
    anyadeElemento(miArrayPlus, 8);

    // Muestra el contenido del ArrayPlus
    imprimeArrayPlus(miArrayPlus);

    // Libera la memoria del ArrayPlus
    liberaArrayPlus(miArrayPlus);

    return 0;
}*/
