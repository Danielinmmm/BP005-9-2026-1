#include <iostream>
using namespace std;

int main() {
    int fila, columna;
    int n = 5;

    for (fila = 1; fila <= n; fila++) {

        for (columna = 1; columna <= n - fila; columna++) {
            cout << " ";
        }

        for (columna = 1; columna <= 2 * fila - 1; columna++) {

            if (columna == 1 || columna == 2 * fila - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    for (fila = n - 1; fila >= 1; fila--) {

        for (columna = 1; columna <= n - fila; columna++) {
            cout << " ";
        }

        for (columna = 1; columna <= 2 * fila - 1; columna++) {

            if (columna == 1 || columna == 2 * fila - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
