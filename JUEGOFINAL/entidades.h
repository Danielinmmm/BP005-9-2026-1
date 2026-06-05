#ifndef ENTIDADES_H
#define ENTIDADES_H

struct Nave {
    int fila;
    int columna;
    int vidas;
};

struct Bala {
    int fila;
    int columna;
    bool activa;
};

struct Enemigo {
    int fila;
    int columna;
    bool vivo;
};

const int MAX_BALAS = 20;
const int MAX_ENEMIGOS = 36;

void inicializarNave(Nave* nave);
void moverNave(Nave* nave, char tecla);

void inicializarBalas(Bala balas[], int cantidad);
void dispararBala(Bala balas[], int cantidad, Nave nave);
void actualizarBalas(Bala balas[], int cantidad);

void inicializarEnemigos(Enemigo enemigos[], int cantidad);

#endif