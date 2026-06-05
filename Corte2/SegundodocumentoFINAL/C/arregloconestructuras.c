#include <stdio.h>

typedef struct {
    int muestra;
    float tiempo;
    float valor;
} Medicion;

int main() {

    Medicion datos[3] = {
        {1,0.00,2.50},
        {2,0.01,2.80},
        {3,0.02,3.10}
    };

    float suma = 0;

    for(int i=0;i<3;i++) {
        suma += datos[i].valor;
    }

    printf("Promedio = %.2f\n", suma/3);

    return 0;
}
