// fichero 30701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30701;

Registro30701 crear_registro30701(int id) {
    Registro30701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30701(Registro30701 r) {
    return r.valor + r.id;
}
