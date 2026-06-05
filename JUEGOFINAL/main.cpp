#include <iostream>

#include "entidades.h"
#include "tablero.h"
#include "juego.h"
#include "memoria.h"

using namespace std;

int main() {

    char tablero[FILAS][COLUMNAS];

    Nave jugador;

    Bala balas[MAX_BALAS];

    Enemigo enemigos[MAX_ENEMIGOS];

    Juego juego;

    inicializarNave(&jugador);

    inicializarBalas(
        balas,
        MAX_BALAS
    );

    inicializarEnemigos(
        enemigos,
        MAX_ENEMIGOS
    );

    inicializarJuego(&juego);

    char tecla;

    while(!juego.terminado) {

        cout << string(30, '\n');

        limpiarTablero(tablero);

        dibujarBordes(tablero);

        colocarNave(
            tablero,
            jugador
        );

        colocarBalas(
            tablero,
            balas,
            MAX_BALAS
        );

        colocarEnemigos(
            tablero,
            enemigos,
            MAX_ENEMIGOS
        );

        mostrarTablero(tablero);

        cout << "\nPuntaje: "
             << juego.puntaje
             << endl;

        cout << "\nA = izquierda";
        cout << "\nD = derecha";
        cout << "\nF = disparar";
        cout << "\nM = memoria";
        cout << "\nQ = salir";
        cout << "\n\nOpcion: ";

        cin >> tecla;

        if(tecla == 'q') {
            break;
        }

        if(tecla == 'm') {

            mostrarReporteMemoria();

            cin.get();
            cin.get();
        }

        if(tecla == 'f') {

            dispararBala(
                balas,
                MAX_BALAS,
                jugador
            );
        }

        moverNave(
            &jugador,
            tecla
        );

        actualizarBalas(
            balas,
            MAX_BALAS
        );

        detectarColisiones(
            balas,
            MAX_BALAS,
            enemigos,
            MAX_ENEMIGOS,
            &juego
        );

        verificarVictoria(
            &juego,
            MAX_ENEMIGOS
        );
    }

    if(juego.victoria) {

        cout << "\nVICTORIA!\n";
        cout << "Puntaje final: "
             << juego.puntaje
             << endl;
    }

    cout << "\nFin del juego.\n";

    return 0;
}