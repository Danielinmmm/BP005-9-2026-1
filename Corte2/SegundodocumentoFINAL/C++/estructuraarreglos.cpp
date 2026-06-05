#include <iostream>
using namespace std;

struct Medicion {
    int muestra;
    float tiempo;
    float valor;
};

int main() {

    Medicion datos[3] = {
        {1,0.00,2.50},
        {2,0.01,2.80},
        {3,0.02,3.10}
    };

    float suma = 0;

    for(int i=0;i<3;i++) {
        suma += datos[i].valor;
    }

    cout << "Promedio = " << suma/3 << endl;

    return 0;
}
