// fichero 14701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14701;

Registro14701 crear_registro14701(int id) {
    Registro14701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14701(Registro14701 r) {
    return r.valor + r.id;
}
