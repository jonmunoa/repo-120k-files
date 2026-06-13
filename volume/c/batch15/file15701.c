// fichero 15701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15701;

Registro15701 crear_registro15701(int id) {
    Registro15701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15701(Registro15701 r) {
    return r.valor + r.id;
}
