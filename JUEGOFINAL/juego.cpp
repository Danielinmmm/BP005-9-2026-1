#include "juego.h"

void inicializarJuego(Juego* juego) {

    juego->puntaje = 0;
    juego->enemigosDestruidos = 0;

    juego->terminado = false;
    juego->victoria = false;
}

void detectarColisiones(
    Bala balas[],
    int numBalas,
    Enemigo enemigos[],
    int numEnemigos,
    Juego* juego
) {

    for(int i=0;i<numBalas;i++) {

        if(!balas[i].activa)
            continue;

        for(int j=0;j<numEnemigos;j++) {

            if(!enemigos[j].vivo)
                continue;

            if(balas[i].fila == enemigos[j].fila &&
               balas[i].columna == enemigos[j].columna) {

                balas[i].activa = false;
                enemigos[j].vivo = false;

                juego->puntaje += 10;
                juego->enemigosDestruidos++;
            }
        }
    }
}

void verificarVictoria(
    Juego* juego,
    int totalEnemigos
) {

    if(juego->enemigosDestruidos ==
       totalEnemigos) {

        juego->victoria = true;
        juego->terminado = true;
    }
}