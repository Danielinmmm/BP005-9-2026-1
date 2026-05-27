#include <stdio.h>

int main() {
    int fila = 1;
    int columna;

    while (fila <= 3) {
        columna = 1;

        while (columna <= 10) {
            printf("#");
            columna++;
        }

        printf("\n");
        fila++;
    }

    return 0;
}
