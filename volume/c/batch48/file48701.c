// fichero 48701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48701;

Registro48701 crear_registro48701(int id) {
    Registro48701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48701(Registro48701 r) {
    return r.valor + r.id;
}
