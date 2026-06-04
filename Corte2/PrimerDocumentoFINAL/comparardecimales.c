#include <stdio.h>
#include <math.h>

int main() {

    double a = 1.000001;
    double b = 1.000002;

    double tolerancia = 0.00001;

    if(fabs(a - b) < tolerancia)
        printf("Son iguales");
    else
        printf("Son diferentes");

    return 0;
}
