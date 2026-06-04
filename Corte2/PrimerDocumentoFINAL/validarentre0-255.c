#include <stdio.h>
#include <stdint.h>

int main() {

    int valor;

    do {
        printf("Ingrese valor entre 0 y 255: ");
        scanf("%d", &valor);
    } while(valor < 0 || valor > 255);

    uint8_t dato = valor;

    printf("Dato almacenado = %u", dato);

    return 0;
}
