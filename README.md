# Práctica 5 – Tipos Abstractos de Datos


## ArrayPlusTAD

Dado que la implementación de arrays de C no tiene funciones avanzadas, se propone la creación de un TAD llamado ArrayPlusTAD que amplíe la funcionalidad de los arrays. En este primer ejemplo, se tratará de manejar arrays de enteros (int).

Para ello será necesario implementar el tipo de datos ArrayPlusTAD así como las siguientes funciones:

```ArrayPlusTAD *creaArrayPlus(int tamanio);```

Recibe el tamaño del nuevo ArrayPlusTAD y crea en memoria dinámica la estructura necesaria para almacenarlo.

```int anyadeElemento(ArrayPlusTAD *miArrayPlus, int elemento);```

Añade un nuevo elemento al ArrayPlusTAD que se pasa como argumento. Si no caben más elementos, el nuevo elemento no se añade, y se muestra un mensaje de error, devolviendo -1. Si no hay errores, se devuelve 0.

```void anyadeArray(ArrayPlusTAD *miArrayPlus, int *arrayElementos, int numNuevosElementos);```

Añade numNuevosElements de arrayElements al ArrayPlusTAD. En caso de que no quepan todos, la ejecución se detiene cuando no se puedan añadir más elementos. Se recomienda utilizar la función anterior.

```void imprimeArrayPlus(ArrayPlusTAD *miArrayPlus);```

Muestra los elementos que contiene miArrayPlus.

```void vaciaArrayPlus(ArrayPlusTAD *miArrayPlus);```

Vacía el contenido de miArrayPlus.

```void liberaArrayPlus(ArrayPlusTAD *miArrayPlus);```

Libera la memoria ocupada por miArrayPlus.
