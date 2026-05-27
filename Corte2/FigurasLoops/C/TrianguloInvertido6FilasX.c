#include <stdio.h>

int main() {
    int fila = 6;
    int simbolos;

    while (fila >= 1) {
        simbolos = fila;

        while (simbolos > 0) {
            printf("x");
            simbolos--;
        }

        printf("\n");
        fila--;
    }

    return 0;
}
