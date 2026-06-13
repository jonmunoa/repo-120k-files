// fichero 37701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37701;

Registro37701 crear_registro37701(int id) {
    Registro37701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37701(Registro37701 r) {
    return r.valor + r.id;
}
