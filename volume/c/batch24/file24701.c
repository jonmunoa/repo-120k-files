// fichero 24701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24701;

Registro24701 crear_registro24701(int id) {
    Registro24701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24701(Registro24701 r) {
    return r.valor + r.id;
}
