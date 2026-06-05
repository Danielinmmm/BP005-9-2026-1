#include "entidades.h"

void inicializarNave(Nave* nave) {

    nave->fila = 18;
    nave->columna = 20;
    nave->vidas = 3;
}

void moverNave(Nave* nave, char tecla) {

    if(tecla == 'a' && nave->columna > 1)
        nave->columna--;

    if(tecla == 'd' && nave->columna < 38)
        nave->columna++;
}

void inicializarBalas(Bala balas[], int cantidad) {

    for(int i = 0; i < cantidad; i++) {

        balas[i].activa = false;
    }
}

void dispararBala(Bala balas[], int cantidad, Nave nave) {

    for(int i = 0; i < cantidad; i++) {

        if(!balas[i].activa) {

            balas[i].fila = nave.fila - 1;
            balas[i].columna = nave.columna;
            balas[i].activa = true;
            break;
        }
    }
}

void actualizarBalas(Bala balas[], int cantidad) {

    for(int i = 0; i < cantidad; i++) {

        if(balas[i].activa) {

            balas[i].fila--;

            if(balas[i].fila <= 0)
                balas[i].activa = false;
        }
    }
}

void inicializarEnemigos(Enemigo enemigos[],
                         int cantidad) {

    int indice = 0;

    for(int fila = 1; fila <= 4; fila++) {

        for(int columna = 0; columna < 9; columna++) {

            if(indice < cantidad) {

                enemigos[indice].fila = fila * 2;
                enemigos[indice].columna = 4 + columna * 4;
                enemigos[indice].vivo = true;

                indice++;
            }
        }
    }
}