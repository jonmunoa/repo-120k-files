// fichero 16701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16701;

Registro16701 crear_registro16701(int id) {
    Registro16701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16701(Registro16701 r) {
    return r.valor + r.id;
}
