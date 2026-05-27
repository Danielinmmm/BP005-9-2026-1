#include <iostream>
using namespace std;

int main() {
    int n;
    int fila, espacios, simbolos;

    cout << "Ingrese el tamaño del rombo: ";
    cin >> n;

    // Parte superior
    for (fila = 1; fila <= n; fila++) {

        for (espacios = 1; espacios <= n - fila; espacios++) {
            cout << " ";
        }

        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            cout << "*";
        }

        cout << endl;
    }

    // Parte inferior
    for (fila = n - 1; fila >= 1; fila--) {

        for (espacios = 1; espacios <= n - fila; espacios++) {
            cout << " ";
        }

        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
