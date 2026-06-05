#include <iostream>
#include <cstdint>
using namespace std;

int main() {

    int valor;

    do {
        cout << "Ingrese valor entre 0 y 255: ";
        cin >> valor;
    }
    while(valor < 0 || valor > 255);

    uint8_t dato = valor;

    cout << "Dato = " << (int)dato;

    return 0;
}
