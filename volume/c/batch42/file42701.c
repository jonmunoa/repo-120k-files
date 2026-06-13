// fichero 42701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42701;

Registro42701 crear_registro42701(int id) {
    Registro42701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42701(Registro42701 r) {
    return r.valor + r.id;
}
