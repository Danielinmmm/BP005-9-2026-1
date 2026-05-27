#include <stdio.h>

int main() {
    int fila = 1;
    int columna;

    while (fila <= 5) {

        columna = 1;

        while (columna <= 5) {

            if (fila == columna || columna == 6 - fila)
                printf("*");
            else
                printf(" ");

            columna++;
        }

        printf("\n");
        fila++;
    }

    return 0;
}
