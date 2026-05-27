#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int fila = n; fila >= 1; fila--) {
        for (int esp = 1; esp <= n - fila; esp++) {
            cout << " ";
        }

        for (int sim = 1; sim <= 2 * fila - 1; sim++) {
            cout << "@";
        }

        cout << endl;
    }

    for (int fila = 2; fila <= n; fila++) {
        for (int esp = 1; esp <= n - fila; esp++) {
            cout << " ";
        }

        for (int sim = 1; sim <= 2 * fila - 1; sim++) {
            cout << "@";
        }

        cout << endl;
    }

    return 0;
}
