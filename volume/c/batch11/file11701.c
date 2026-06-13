// fichero 11701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11701;

Registro11701 crear_registro11701(int id) {
    Registro11701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11701(Registro11701 r) {
    return r.valor + r.id;
}
