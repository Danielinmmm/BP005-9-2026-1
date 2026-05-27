#include <stdio.h>

int main() {
    int fila = 1;
    int espacios, columna;

    while (fila <= 5) {

        espacios = 5 - fila;

        while (espacios > 0) {
            printf(" ");
            espacios--;
        }

        columna = 1;

        while (columna <= 2 * fila - 1) {

            if (columna == 1 || columna == 2 * fila - 1)
                printf("$");
            else
                printf(" ");

            columna++;
        }

        printf("\n");
        fila++;
    }

    fila = 4;

    while (fila >= 1) {

        espacios = 5 - fila;

        while (espacios > 0) {
            printf(" ");
            espacios--;
        }

        columna = 1;

        while (columna <= 2 * fila - 1) {

            if (columna == 1 || columna == 2 * fila - 1)
                printf("$");
            else
                printf(" ");

            columna++;
        }

        printf("\n");
        fila--;
    }

    return 0;
}
