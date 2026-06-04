#include <stdio.h>

int main() {
    float n1, n2, n3, promedio;

    scanf("%f %f %f", &n1, &n2, &n3);

    promedio = (n1 + n2 + n3) / 3;

    printf("Promedio = %.2f", promedio);

    return 0;
}
