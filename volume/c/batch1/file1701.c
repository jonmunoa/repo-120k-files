// fichero 1701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1701;

Registro1701 crear_registro1701(int id) {
    Registro1701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1701(Registro1701 r) {
    return r.valor + r.id;
}
