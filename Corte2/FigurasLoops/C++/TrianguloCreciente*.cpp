#include <iostream>
using namespace std;

int main() {
    for (int fila = 1; fila <= 5; fila++) {
        for (int columna = 1; columna <= fila; columna++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
