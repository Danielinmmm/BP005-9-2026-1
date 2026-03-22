#include <stdio.h>

int main(){
  int tiempo;

printf("Ingrese la hora en formato milita: ");
scanf("%d", &tiempo);

if (tiempo < 18) {
printf ("Buen dia.");
}

else {
  printf("Buena tarde.");
}
return 0;
}
