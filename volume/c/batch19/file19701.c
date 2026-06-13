// fichero 19701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19701;

Registro19701 crear_registro19701(int id) {
    Registro19701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19701(Registro19701 r) {
    return r.valor + r.id;
}
