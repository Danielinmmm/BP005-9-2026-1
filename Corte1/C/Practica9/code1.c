#include <stdio.h>
int main() {
  int doorCode;
printf("Ingrese un codigo de 4 digitos: ");
scanf("%d", &doorCode);


  if (doorCode == 1337) {
  printf("Codigo correcto\n La puerta ahora se encuentra abierta.");
  }
else {
  printf ("Codigo incorrecto.\n La puerta permanece cerrada.");
}
return 0;
}
