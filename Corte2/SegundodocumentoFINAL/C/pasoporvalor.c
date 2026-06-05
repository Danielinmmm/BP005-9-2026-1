#include <stdio.h>

typedef struct {
    float temperatura;
    float humedad;
    int estado;
} Sensor;

void mostrarSensor(Sensor s) {

    printf("%.2f\n", s.temperatura);
    printf("%.2f\n", s.humedad);
    printf("%d\n", s.estado);
}

int main() {

    Sensor s1 = {26.4, 65.0, 1};

    mostrarSensor(s1);

    return 0;
}
