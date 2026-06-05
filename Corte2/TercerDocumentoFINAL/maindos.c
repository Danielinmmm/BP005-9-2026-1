#include <stdio.h>
#include "utilidades.h"

int main(){

    int x=10;
    int y=20;

    intercambiar(&x,&y);

    printf("%d %d\n",x,y);

    return 0;
}
