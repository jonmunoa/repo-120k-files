// fichero 42337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42337;

Registro42337 crear_registro42337(int id) {
    Registro42337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42337(Registro42337 r) {
    return r.valor + r.id;
}
