// fichero 4701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4701;

Registro4701 crear_registro4701(int id) {
    Registro4701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4701(Registro4701 r) {
    return r.valor + r.id;
}
