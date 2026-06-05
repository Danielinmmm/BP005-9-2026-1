#include <iostream>

#include "memoria.h"
#include "entidades.h"
#include "juego.h"
#include "tablero.h"

using namespace std;

void mostrarReporteMemoria() {

    cout << "\n=== REPORTE MEMORIA ===\n";

    cout << "Nave: "
         << sizeof(Nave)
         << " bytes\n";

    cout << "Bala: "
         << sizeof(Bala)
         << " bytes\n";

    cout << "Enemigo: "
         << sizeof(Enemigo)
         << " bytes\n";

    cout << "Juego: "
         << sizeof(Juego)
         << " bytes\n";

    cout << "Balas: "
         << sizeof(Bala) * MAX_BALAS
         << " bytes\n";

    cout << "Enemigos: "
         << sizeof(Enemigo) * MAX_ENEMIGOS
         << " bytes\n";

    cout << "Tablero: "
         << sizeof(char) * FILAS * COLUMNAS
         << " bytes\n";
}