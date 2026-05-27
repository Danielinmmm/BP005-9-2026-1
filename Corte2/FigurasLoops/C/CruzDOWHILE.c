#include <stdio.h>

int main() {
    int fila = 1;
    int columna;

    do {
        columna = 1;

        do {

            if (fila == 3 || columna == 3)
                printf("+");
            else
                printf(" ");

            columna++;

        } while (columna <= 5);

        printf("\n");
        fila++;

    } while (fila <= 5);

    return 0;
}
