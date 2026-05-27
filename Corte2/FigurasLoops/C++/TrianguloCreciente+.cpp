#include <iostream>
using namespace std;

int main() {
    for (int fila = 1; fila <= 7; fila++) {
        for (int col = 1; col <= fila; col++) {
            cout << "+";
        }
        cout << endl;
    }
    return 0;
}
