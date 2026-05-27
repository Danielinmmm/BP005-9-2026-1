#include <iostream>

void leerArreglo(int *datos, int n);
void mostrarArreglo(int *datos, int n);
void analizarArreglo(int *datos, int n, int *suma, int *mayor, int *menor);
void leerMatriz(int *matriz, int filas, int columnas);
void mostrarMatriz(int *matriz, int filas, int columnas);
int sumarMatriz(int *matriz, int filas, int columnas);

int main() {
    int n = 0;
    int *datos = nullptr; 
    int sumaArr = 0, mayorArr = 0, menorArr = 0;

    int filas = 0, columnas = 0;
    int *matriz = nullptr; 
    int sumaMat = 0;
    std::cout << "Cantidadedatosdelarreglo: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Cantidad no valida." << std::endl;
        return 1;
    }

    datos = new int[n];

    leerArreglo(datos, n);

    std::cout << "Arreglo: ";
    mostrarArreglo(datos, n);
    std::cout << std::endl;

    analizarArreglo(datos, n, &sumaArr, &mayorArr, &menorArr);
    std::cout << "Suma = " << sumaArr << std::endl;
    std::cout << "Mayor = " << mayorArr << std::endl;
    std::cout << "Menor = " << menorArr << std::endl;

    std::cout << "Filasdelamatriz: ";
    std::cin >> filas;
    std::cout << "Columnasdelamatriz: ";
    std::cin >> columnas;

    if (filas <= 0 || columnas <= 0) {
        std::cout << "Dimensiones no validas." << std::endl;
        delete[] datos;
        datos = nullptr;
        return 1;
    }

    matriz = new int[filas * columnas];

    leerMatriz(matriz, filas, columnas);

    std::cout << "Matriz:" << std::endl;
    mostrarMatriz(matriz, filas, columnas);

    sumaMat = sumarMatriz(matriz, filas, columnas);
    std::cout << "Sumadela matriz = " << sumaMat << std::endl;
}    delete[] datos;
    datos = nullptr; 

    delete[] matriz;
    matriz = nullptr; 

    std::cout << "Memorialiberadacorrectamente." << std::endl;

    return 0;
}

void leerArreglo(int *datos, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "Ingresedatos[" << i << "]: ";
        std::cin >> datos[i];
    }
}

void mostrarArreglo(int *datos, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << datos[i] << " ";
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
            std::cout << "Ingresem[" << i << "][" << j << "]: ";
            std::cin >> matriz[i * columnas + j];
        }
    }
}

void mostrarMatriz(int *matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << matriz[i * columnas + j] << " ";
        }
        std::cout << std::endl;
    }
}

int sumarMatriz(int *matriz, int filas, int columnas) {
    int suma = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            suma += matriz[i * columnas + j];
        }
    }
    return suma;
}
