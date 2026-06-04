#include <stdio.h>

int main() {
    int edad;

    scanf("%d", &edad);

    if (edad >= 18)
        printf("Mayor de edad");
    else
        printf("Menor de edad");

    return 0;
}
