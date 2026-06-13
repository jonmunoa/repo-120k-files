// fichero 5701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5701;

Registro5701 crear_registro5701(int id) {
    Registro5701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5701(Registro5701 r) {
    return r.valor + r.id;
}
