#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int fila = 1; fila <= n; fila++) {
        for (int esp = 1; esp <= n - fila; esp++) {
            cout << " ";
        }

        for (int col = 1; col <= 2 * fila - 1; col++) {
            if (col == 1 || col == 2 * fila - 1)
                cout << "$";
            else
                cout << " ";
        }

        cout << endl;
    }

    for (int fila = n - 1; fila >= 1; fila--) {
        for (int esp = 1; esp <= n - fila; esp++) {
            cout << " ";
        }

        for (int col = 1; col <= 2 * fila - 1; col++) {
            if (col == 1 || col == 2 * fila - 1)
                cout << "$";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
