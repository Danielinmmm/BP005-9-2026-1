#include <stdio.h>

int main() {
    int fila = 1;
    int espacios, simbolos;

    while (fila <= 6) {

        espacios = 6 - fila;

        while (espacios > 0) {
            printf(" ");
            espacios--;
        }

        simbolos = 2 * fila - 1;

        while (simbolos > 0) {
            printf("o");
            simbolos--;
        }

        printf("\n");
        fila++;
    }

    return 0;
}
