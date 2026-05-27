#include <iostream>
using namespace std;

int main() {
    int fila, espacios, simbolos;
    int n = 5;

    for (fila = n; fila >= 1; fila--) {

        for (espacios = 1; espacios <= n - fila; espacios++) {
            cout << " ";
        }

        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            cout << "*";
        }

        cout << endl;
    }

    for (fila = 2; fila <= n; fila++) {

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
