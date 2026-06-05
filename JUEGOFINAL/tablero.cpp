#include <iostream>
#include "tablero.h"

using namespace std;

void limpiarTablero(char tablero[FILAS][COLUMNAS]) {

    for(int i=0;i<FILAS;i++) {

        for(int j=0;j<COLUMNAS;j++) {

            tablero[i][j] = ' ';
        }
    }
}

void dibujarBordes(char tablero[FILAS][COLUMNAS]) {

    for(int j=0;j<COLUMNAS;j++) {

        tablero[0][j] = '-';
        tablero[FILAS-1][j] = '-';
    }

    for(int i=0;i<FILAS;i++) {

        tablero[i][0] = '|';
        tablero[i][COLUMNAS-1] = '|';
    }
}

void colocarNave(char tablero[FILAS][COLUMNAS],
                 Nave nave) {

    tablero[nave.fila][nave.columna] = 'X';
}

void colocarBalas(char tablero[FILAS][COLUMNAS],
                  Bala balas[],
                  int cantidad) {

    for(int i=0;i<cantidad;i++) {

        if(balas[i].activa) {

            tablero[balas[i].fila]
                   [balas[i].columna] = '|';
        }
    }
}

void colocarEnemigos(char tablero[FILAS][COLUMNAS],
                     Enemigo enemigos[],
                     int cantidad) {

    for(int i=0;i<cantidad;i++) {

        if(enemigos[i].vivo) {

            tablero[enemigos[i].fila]
                   [enemigos[i].columna] = 'O';
        }
    }
}

void mostrarTablero(char tablero[FILAS][COLUMNAS]) {

    for(int i=0;i<FILAS;i++) {

        for(int j=0;j<COLUMNAS;j++) {

            cout << tablero[i][j];
        }

        cout << endl;
    }
}