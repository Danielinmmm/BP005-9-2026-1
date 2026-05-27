#include <iostream>
using namespace std;

int main() {
    int fila, columna;
    int n = 5;

    for (fila = 1; fila <= n; fila++) {

        for (columna = 1; columna <= n; columna++) {

            if (fila == 3 || columna == 3) {
                cout << "+ ";
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}
