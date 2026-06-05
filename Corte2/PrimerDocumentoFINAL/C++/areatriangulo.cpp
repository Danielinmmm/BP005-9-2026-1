#include <iostream>
using namespace std;

int main() {

    float base, altura;

    cout << "Base: ";
    cin >> base;

    cout << "Altura: ";
    cin >> altura;

    float area = (base * altura) / 2;

    cout << "Area = " << area;

    return 0;
}
