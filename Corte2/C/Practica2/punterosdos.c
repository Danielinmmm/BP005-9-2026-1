#include <stdio.h>
void intercambiar(int *a, int *b){
  int temp = *a;
  *a = *n;
  *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

printf("Antes: x = %d, y = %d\m", x, y);
intercambiar(&x, &y);
printf("Despues: x = %d, y = %d\n", x, y);
  return 0;
}
