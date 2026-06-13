// fichero 26701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26701;

Registro26701 crear_registro26701(int id) {
    Registro26701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26701(Registro26701 r) {
    return r.valor + r.id;
}
