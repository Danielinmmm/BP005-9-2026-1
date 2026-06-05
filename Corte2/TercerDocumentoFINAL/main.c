#include <stdio.h>
#include "operaciones.h"

int main(){

    int a=10,b=5;

    printf("%d\n", sumar(a,b));
    printf("%d\n", restar(a,b));
    printf("%d\n", multiplicar(a,b));
    printf("%.2f\n", dividir(a,b));

    return 0;
}
