// fichero 6701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6701;

Registro6701 crear_registro6701(int id) {
    Registro6701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6701(Registro6701 r) {
    return r.valor + r.id;
}
