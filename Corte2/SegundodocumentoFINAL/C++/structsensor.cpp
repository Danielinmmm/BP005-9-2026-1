#include <iostream>
using namespace std;

struct Sensor {
    float temperatura;
    float humedad;
    int estado;
};

int main() {
    Sensor s1;

    s1.temperatura = 25.6;
    s1.humedad = 68.5;
    s1.estado = 1;

    cout << "Temperatura: " << s1.temperatura << " C" << endl;
    cout << "Humedad: " << s1.humedad << "%" << endl;
    cout << "Estado: " << s1.estado << endl;

    return 0;
}
