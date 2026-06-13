// fichero 45337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45337;

Registro45337 crear_registro45337(int id) {
    Registro45337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45337(Registro45337 r) {
    return r.valor + r.id;
}
