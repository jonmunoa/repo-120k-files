// fichero 2701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2701;

Registro2701 crear_registro2701(int id) {
    Registro2701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2701(Registro2701 r) {
    return r.valor + r.id;
}
