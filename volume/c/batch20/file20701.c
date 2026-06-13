// fichero 20701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20701;

Registro20701 crear_registro20701(int id) {
    Registro20701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20701(Registro20701 r) {
    return r.valor + r.id;
}
