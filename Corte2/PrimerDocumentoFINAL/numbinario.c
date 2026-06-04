#include <stdio.h>

void binario(unsigned char n) {
    for(int i = 7; i >= 0; i--)
        printf("%d", (n >> i) & 1);
}

int main() {

    binario(0);   printf("\n");
    binario(1);   printf("\n");
    binario(5);   printf("\n");
    binario(127); printf("\n");
    binario(255);

    return 0;
}
