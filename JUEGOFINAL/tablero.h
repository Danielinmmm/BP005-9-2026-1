#ifndef TABLERO_H
#define TABLERO_H

#include "entidades.h"

const int FILAS = 20;
const int COLUMNAS = 40;

void limpiarTablero(char tablero[FILAS][COLUMNAS]);

void dibujarBordes(char tablero[FILAS][COLUMNAS]);

void colocarNave(char tablero[FILAS][COLUMNAS],
                 Nave nave);

void colocarBalas(char tablero[FILAS][COLUMNAS],
                  Bala balas[],
                  int cantidad);

void colocarEnemigos(char tablero[FILAS][COLUMNAS],
                     Enemigo enemigos[],
                     int cantidad);

void mostrarTablero(char tablero[FILAS][COLUMNAS]);

#endif