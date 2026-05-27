#include <iostream>
using namespace std;

int main() {
    for (int fila = 6; fila >= 1; fila--) {
        for (int col = 1; col <= fila; col++) {
            cout << "X";
        }
        cout << endl;
    }
    return 0;
}
