#include <stdio.h>
#include <stdlib.h>


void leerArreglo(int *datos, int n);
void mostrarArreglo(int *datos, int n);
void analizarArreglo(int *datos, int n, int *suma, int *mayor, int *menor);
void leerMatriz(int *matriz, int filas, int columnas);
void mostrarMatriz(int *matriz, int filas, int columnas);
int sumarMatriz(int *matriz, int filas, int columnas);

int main() {
    
    int n = 0;
    int *datos = NULL; 
    int sumaArr = 0, mayorArr = 0, menorArr = 0;

   
    int filas = 0, columnas = 0;
    int *matriz = NULL; 
    int sumaMat = 0;

    printf("Cantidadedatosdelarreglo: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Cantidad no valida.\n");
        return 1;
    }


    datos = (int *)malloc(n * sizeof(int));
    
    if (datos == NULL) {
        printf("Error: No se pudo asignar memoria para el arreglo.\n");
        return 1;
    }

    leerArreglo(datos, n);
    
    printf("Arreglo: ");
    mostrarArreglo(datos, n);
    printf("\n");


    analizarArreglo(datos, n, &sumaArr, &mayorArr, &menorArr);
    printf("Suma = %d\n", sumaArr);
    printf("Mayor = %d\n", mayorArr);
    printf("Menor = %d\n", menorArr);

    printf("Filasdelamatriz: ");
    scanf("%d", &filas);
    printf("Columnasdelamatriz: ");
    scanf("%d", &columnas);

    if (filas <= 0 || columnas <= 0) {
        printf("Dimensiones no validas.\n");
        free(datos);
        datos = NULL;
        return 1;
    }

    
    matriz = (int *)malloc(filas * columnas * sizeof(int));
    
    
    if (matriz == NULL) {
        printf("Error: No se pudo asignar memoria para la matriz.\n");
        free(datos);
        datos = NULL;
        return 1;
    }

    leerMatriz(matriz, filas, columnas);
    
    printf("Matriz:\n");
    mostrarMatriz(matriz, filas, columnas);

    sumaMat = sumarMatriz(matriz, filas, columnas);
    printf("Sumadela matriz = %d\n", sumaMat);

    /* LIBERACIÓN DE MEMORIA DINÁMICA*/
           free(datos);
    datos = NULL; 

    free(matriz);
    matriz = NULL; 

    printf("Memoria liberada correctamente.\n");

    return 0;
}

void leerArreglo(int *datos, int n) {
    for (int i = 0; i < n; i++) {
        printf("Ingresedatos[%d]: ", i);
        scanf("%d", &datos[i]); 
    }
}

void mostrarArreglo(int *datos, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", datos[i]);
    }
}

void analizarArreglo(int *datos, int n, int *suma, int *mayor, int *menor) {
    *suma = 0;
    *mayor = datos[0];
    *menor = datos[0];

    for (int i = 0; i < n; i++) {
        *suma += datos[i];
        if (datos[i] > *mayor) {
            *mayor = datos[i];
        }
        if (datos[i] < *menor) {
            *menor = datos[i];
        }
    }
}

void leerMatriz(int *matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingresem[%d][%d]: ", i, j);
            scanf("%d", &matriz[i * columnas + j]);
        }
    }
}

//Imprime la matrizl//
void mostrarMatriz(int *matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i * columnas + j]);
        }
        printf("\n");
    }
}

// Retorna la sumatoria total de los elementos dentro de la matriz//
int sumarMatriz(int *matriz, int filas, int columnas) {
    int suma = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            suma += matriz[i * columnas + j];
        }
    }
    return suma;
}
