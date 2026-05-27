#include <iostream>
using namespace std;

int main() {
    int fila = 1;

    while (fila <= 4) {
        int columna = 1;

        while (columna <= 8) {
            cout << "#";
            columna++;
        }

        cout << endl;
        fila++;
    }

    return 0;
}
