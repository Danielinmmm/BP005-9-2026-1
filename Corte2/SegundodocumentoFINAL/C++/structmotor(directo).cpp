#include <iostream>
using namespace std;

struct Motor {
    float velocidad;
    float voltaje;
    int sentido;
};

int main() {

    Motor m1 = {2.5, 8.0, 1};

    cout << "Velocidad: " << m1.velocidad << endl;
    cout << "Voltaje: " << m1.voltaje << endl;
    cout << "Sentido: " << m1.sentido << endl;

    return 0;
}
