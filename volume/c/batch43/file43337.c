// fichero 43337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43337;

Registro43337 crear_registro43337(int id) {
    Registro43337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43337(Registro43337 r) {
    return r.valor + r.id;
}
