#include <iostream>
using namespace std;

int main() {
    int fila, espacios, num;
    int n = 5;

    for (fila = 1; fila <= n; fila++) {

        for (espacios = 1; espacios <= n - fila; espacios++) {
            cout << " ";
        }

        for (num = 1; num <= fila; num++) {
            cout << num;
        }

        for (num = fila - 1; num >= 1; num--) {
            cout << num;
        }

        cout << endl;
    }

    return 0;
}
