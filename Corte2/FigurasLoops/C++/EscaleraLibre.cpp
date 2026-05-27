#include <iostream>
using namespace std;

int main() {
    int fila, columna;
    int n = 5;

    for (fila = 1; fila <= n; fila++) {

        // izquierda
        for (columna = 1; columna <= fila; columna++) {
            cout << "*";
        }

        // espacio del medio
        for (columna = 1; columna <= (n - fila) * 2; columna++) {
            cout << " ";
        }

        // derecha
        for (columna = 1; columna <= fila; columna++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
