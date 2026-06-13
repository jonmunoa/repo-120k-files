// fichero 18701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18701;

Registro18701 crear_registro18701(int id) {
    Registro18701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18701(Registro18701 r) {
    return r.valor + r.id;
}
