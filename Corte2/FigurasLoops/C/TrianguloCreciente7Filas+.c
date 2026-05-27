#include <stdio.h>

int main() {
    int fila = 1;
    int simbolos;

    while (fila <= 7) {
        simbolos = fila;

        while (simbolos > 0) {
            printf("+");
            simbolos--;
        }

        printf("\n");
        fila++;
    }

    return 0;
}
