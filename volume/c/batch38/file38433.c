// fichero 38433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38433;

Registro38433 crear_registro38433(int id) {
    Registro38433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38433(Registro38433 r) {
    return r.valor + r.id;
}
