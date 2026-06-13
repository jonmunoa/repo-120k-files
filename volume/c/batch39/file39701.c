// fichero 39701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39701;

Registro39701 crear_registro39701(int id) {
    Registro39701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39701(Registro39701 r) {
    return r.valor + r.id;
}
