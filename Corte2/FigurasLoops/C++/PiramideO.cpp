#include <iostream>
using namespace std;

int main() {
    int n = 6;

    for (int fila = 1; fila <= n; fila++) {
        for (int espacios = 1; espacios <= n - fila; espacios++) {
            cout << " ";
        }

        for (int simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            cout << "o";
        }

        cout << endl;
    }

    return 0;
}
