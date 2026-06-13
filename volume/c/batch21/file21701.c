// fichero 21701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21701;

Registro21701 crear_registro21701(int id) {
    Registro21701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21701(Registro21701 r) {
    return r.valor + r.id;
}
