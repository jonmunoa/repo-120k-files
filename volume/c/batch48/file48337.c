// fichero 48337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48337;

Registro48337 crear_registro48337(int id) {
    Registro48337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48337(Registro48337 r) {
    return r.valor + r.id;
}
