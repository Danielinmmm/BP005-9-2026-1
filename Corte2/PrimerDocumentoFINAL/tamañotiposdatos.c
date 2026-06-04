#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main() {

    printf("int = %zu\n", sizeof(int));
    printf("float = %zu\n", sizeof(float));
    printf("double = %zu\n", sizeof(double));
    printf("char = %zu\n", sizeof(char));
    printf("bool = %zu\n", sizeof(bool));
    printf("uint8_t = %zu\n", sizeof(uint8_t));
    printf("uint16_t = %zu\n", sizeof(uint16_t));
    printf("uint32_t = %zu\n", sizeof(uint32_t));

    return 0;
}
