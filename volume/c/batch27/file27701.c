// fichero 27701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27701;

Registro27701 crear_registro27701(int id) {
    Registro27701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27701(Registro27701 r) {
    return r.valor + r.id;
}
