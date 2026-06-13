// fichero 43701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43701;

Registro43701 crear_registro43701(int id) {
    Registro43701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43701(Registro43701 r) {
    return r.valor + r.id;
}
