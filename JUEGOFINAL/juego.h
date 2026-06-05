#ifndef JUEGO_H
#define JUEGO_H

#include "entidades.h"

struct Juego {

    int puntaje;
    int enemigosDestruidos;

    bool terminado;
    bool victoria;
};

void inicializarJuego(Juego* juego);

void detectarColisiones(
    Bala balas[],
    int numBalas,
    Enemigo enemigos[],
    int numEnemigos,
    Juego* juego
);

void verificarVictoria(
    Juego* juego,
    int totalEnemigos
);

#endif