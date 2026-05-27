#include <stdio.h>

int main() {
    int fila = 1;
    int espacios, simbolos;

    while (fila <= 7) {

        espacios = 7 - fila;

        while (espacios > 0) {
            printf(" ");
            espacios--;
        }

        simbolos = 2 * fila - 1;

        while (simbolos > 0) {
            printf("*");
            simbolos--;
        }

        printf("\n");
        fila++;
    }

    fila = 6;

    while (fila >= 1) {

        espacios = 7 - fila;

        while (espacios > 0) {
            printf(" ");
            espacios--;
        }

        simbolos = 2 * fila - 1;

        while (simbolos > 0) {
            printf("*");
            simbolos--;
        }

        printf("\n");
        fila--;
    }

    return 0;
}
