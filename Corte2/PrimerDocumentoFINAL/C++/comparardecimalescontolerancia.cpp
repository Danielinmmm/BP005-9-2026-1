#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double a = 1.000001;
    double b = 1.000002;

    double tolerancia = 0.00001;

    if(fabs(a - b) < tolerancia)
        cout << "Iguales";
    else
        cout << "Diferentes";

    return 0;
}
