#include <iostream>
using namespace std;

struct Motor {
    float velocidad;
    float voltaje;
};

void cambiarVelocidad(Motor *m) {

    m->velocidad = 5.0;
}

int main() {

    Motor motor1 = {2.0, 6.0};

    cambiarVelocidad(&motor1);

    cout << motor1.velocidad << endl;

    return 0;
}
