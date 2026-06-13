// fichero 10701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10701;

Registro10701 crear_registro10701(int id) {
    Registro10701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10701(Registro10701 r) {
    return r.valor + r.id;
}
