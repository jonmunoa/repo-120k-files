// fichero 22701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22701;

Registro22701 crear_registro22701(int id) {
    Registro22701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22701(Registro22701 r) {
    return r.valor + r.id;
}
