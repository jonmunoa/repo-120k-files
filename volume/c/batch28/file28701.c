// fichero 28701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28701;

Registro28701 crear_registro28701(int id) {
    Registro28701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28701(Registro28701 r) {
    return r.valor + r.id;
}
