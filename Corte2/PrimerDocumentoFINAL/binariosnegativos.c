#include <stdio.h>
#include <stdint.h>

void binario(int8_t n) {
    for(int i = 7; i >= 0; i--)
        printf("%d", (n >> i) & 1);
}

int main() {

    binario(-1); printf("\n");
    binario(-2); printf("\n");
    binario(-5); printf("\n");
    binario(-128);

    return 0;
}
