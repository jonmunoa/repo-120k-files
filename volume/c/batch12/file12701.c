// fichero 12701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12701;

Registro12701 crear_registro12701(int id) {
    Registro12701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12701(Registro12701 r) {
    return r.valor + r.id;
}
