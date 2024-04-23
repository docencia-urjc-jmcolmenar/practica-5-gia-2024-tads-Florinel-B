//
// Created by Jamoncito on 20/04/2024.

#ifndef ARRAYPLUSTAD_H
#define ARRAYPLUSTAD_H
typedef struct tipo *arrayplustad ;

arrayplustad *creaArrayPlus(int tamanyo);
int elementoacc;
int anyadeElemento(arrayplustad *miArrayPlus, int elemento);
void anyadeArray(arrayplustad *miArrayPlus, int *arrayElementos, int numNuevosElementos);
void imprimeArrayPlus(arrayplustad *miArrayPlus);
void vaciaArrayPlus(arrayplustad *miArrayPlus);
void liberaArrayPlus(arrayplustad *miArrayPlus);



#endif //ARRAYPLUSTAD_H
