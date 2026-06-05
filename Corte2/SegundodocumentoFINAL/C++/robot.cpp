#include <iostream>
using namespace std;

struct Pose {
    float x;
    float y;
    float theta;
};

struct Motor {
    float velocidad;
    float voltaje;
};

struct Robot {
    Pose pose;
    Motor motorIzq;
    Motor motorDer;
};

int main() {

    Robot r;

    r.pose.x = 0;
    r.pose.y = 0;
    r.pose.theta = 0;

    r.motorIzq.velocidad = 2.1;

    cout << r.motorIzq.velocidad << endl;

    return 0;
}
