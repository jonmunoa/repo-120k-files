// fichero 46701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46701;

Registro46701 crear_registro46701(int id) {
    Registro46701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46701(Registro46701 r) {
    return r.valor + r.id;
}
