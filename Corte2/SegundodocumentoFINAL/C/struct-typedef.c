#include <stdio.h>

typedef struct {
    float temperatura;
    float humedad;
    int estado;
} Sensor;

int main() {

    Sensor s1;

    s1.temperatura = 24.8;
    s1.humedad = 72.0;
    s1.estado = 1;

    printf("%.2f\n", s1.temperatura);

    return 0;
}
