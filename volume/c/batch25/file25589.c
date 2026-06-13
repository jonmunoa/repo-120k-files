// fichero 25589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25589;

Registro25589 crear_registro25589(int id) {
    Registro25589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25589(Registro25589 r) {
    return r.valor + r.id;
}
