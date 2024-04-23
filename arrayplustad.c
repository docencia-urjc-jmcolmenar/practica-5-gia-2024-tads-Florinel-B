//
// Created by Jamoncito on 20/04/2024.
//
#include <malloc.h>
#include "arrayplustad.h"
#include <stdio.h>

struct tipo {

};
arrayplustad *creaArrayPlus(int tamanyo) {
    arrayplustad *p;
    p = malloc(sizeof(int)*tamanyo);
    vaciaArrayPlus(p);
    elementoacc=0;
    return p;
}
/*
void liberaArrayPlus(arrayplustad *miArrayPlus) {
    free(miArrayPlus);
    printf("memoria borrada");
}
void imprimeArrayPlus(arrayplustad *miArrayPlus) {
    for (int i = 0; i < 7; ++i) {
        printf("%i  ", miArrayPlus[i]);
    }
}
void vaciaArrayPlus(arrayplustad *miArrayPlus) {
    for (int i = 0; i < 7; ++i) {
        miArrayPlus[i] = 0;
    }
};
void anyadeArray(arrayplustad *miArrayPlus, int *arrayElementos, int numNuevosElementos) {
    if (7-elementoacc>=numNuevosElementos) {
        for (int i = 0; i < numNuevosElementos; ++i) {
        anyadeElemento(miArrayPlus,arrayElementos[i]);
        }
    }
}
int anyadeElemento(arrayplustad *miArrayPlus, int elemento) {
    if (elementoacc>7) {
        return -1;
    }
    miArrayPlus[elementoacc] = elemento;
    return 0;
}*/