// fichero 25449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25449;

Registro25449 crear_registro25449(int id) {
    Registro25449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25449(Registro25449 r) {
    return r.valor + r.id;
}
