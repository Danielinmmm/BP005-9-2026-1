#include <stdio.h>
#include "punto.h"

int main(){

    Punto p1;

    inicializarPunto(&p1,3,4);

    moverPunto(&p1,2,-1);

    printf("%.2f\n", calcularDistanciaAlOrigen(p1));

    return 0;
}
