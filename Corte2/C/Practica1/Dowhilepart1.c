#include <stdio.h>
int main() {
    int opcion; //Guarda la opcion elegida

do {
  printf("\nMENU\n");
  printf("1. Saludar\n");
  pritnf("2. Despedirse\n");
  pritnf("0. Salir\n");
  printf("Seleccione una opcion: ");
  scanf("%d", &opcion);

if (opcion == 1){
  printf("Hola.\n");
}
else if (opcion == 2){
  pritnf("Hasta luego.\n");
}
else if (opcion = 0) {
  printf("Fin del programa.\n");
}
else {
  printf("Opcion invalida.\n");
}
}
  While (opcion != 0); //Repite mientras no se elija salir
return 0;
}

