#include <stdio.h>

int sum(int x1, int x2){
int result;

result=x1+x2;
return result;
}

int resta(int x1, int x2){
int result;
result-x1-x2;
return result;
} 

int mult(int x1, int x2){
int result;
result=x1*x2;
return result;
}

void imprimir (){
printf("Hola bebé\n");
}

int main(){
int a, b, r;
a=3;
b=5;
r=sum(a,b);
printf("La suma de los resultados es %d \n",r);
printf("La resta de los resultados es %d \n", resta(a,b));
printf("La multiplicación de los resultados es %d \n", mult(a,b));
imprimir();

return 0:
}
