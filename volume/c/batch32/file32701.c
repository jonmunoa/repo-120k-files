// fichero 32701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32701;

Registro32701 crear_registro32701(int id) {
    Registro32701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32701(Registro32701 r) {
    return r.valor + r.id;
}
