#include <iostream>
using namespace std;

struct Sensor {
    float temperatura;
    float humedad;
    int estado;
};

void mostrarSensor(Sensor s) {

    cout << s.temperatura << endl;
    cout << s.humedad << endl;
    cout << s.estado << endl;
}

int main() {

    Sensor s1 = {26.4, 65.0, 1};

    mostrarSensor(s1);

    return 0;
}
