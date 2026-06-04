#include <stdio.h>

int main() {
    int a, b;

    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);

    printf("Suma: %d\n", a + b);
    printf("Resta: %d\n", a - b);
    printf("Multiplicacion: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Residuo: %d\n", a % b);

    return 0;
}
