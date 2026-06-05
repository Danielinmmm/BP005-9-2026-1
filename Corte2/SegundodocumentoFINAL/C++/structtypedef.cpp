#include <iostream>
using namespace std;

struct Sensor {
    float temperatura;
    float humedad;
    int estado;
};

int main() {

    Sensor s1;

    s1.temperatura = 24.8;
    s1.humedad = 72.0;
    s1.estado = 1;

    cout << s1.temperatura << endl;

    return 0;
}
