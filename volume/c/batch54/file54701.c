// fichero 54701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54701;

Registro54701 crear_registro54701(int id) {
    Registro54701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54701(Registro54701 r) {
    return r.valor + r.id;
}
