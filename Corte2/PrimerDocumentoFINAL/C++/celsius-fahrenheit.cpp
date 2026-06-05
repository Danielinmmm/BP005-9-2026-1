#include <iostream>
using namespace std;

int main() {

    float celsius;

    cout << "Ingrese temperatura: ";
    cin >> celsius;

    float fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Fahrenheit = " << fahrenheit;

    return 0;
}
