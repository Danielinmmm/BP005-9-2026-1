#include <stdio.h>

typedef struct {
    float x;
    float y;
    float theta;
} Pose;

typedef struct {
    float velocidad;
    float voltaje;
} Motor;

typedef struct {
    Pose pose;
    Motor motorIzq;
    Motor motorDer;
} Robot;

int main() {

    Robot r;

    r.pose.x = 0;
    r.pose.y = 0;
    r.pose.theta = 0;

    r.motorIzq.velocidad = 2.1;
    r.motorDer.velocidad = 2.0;

    printf("%.2f\n", r.motorIzq.velocidad);

    return 0;
}
