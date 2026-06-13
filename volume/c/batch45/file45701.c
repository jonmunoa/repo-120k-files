// fichero 45701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45701;

Registro45701 crear_registro45701(int id) {
    Registro45701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45701(Registro45701 r) {
    return r.valor + r.id;
}
