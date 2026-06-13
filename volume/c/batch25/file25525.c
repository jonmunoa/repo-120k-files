// fichero 25525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25525;

Registro25525 crear_registro25525(int id) {
    Registro25525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25525(Registro25525 r) {
    return r.valor + r.id;
}
