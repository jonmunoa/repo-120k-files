// fichero 51701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51701;

Registro51701 crear_registro51701(int id) {
    Registro51701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51701(Registro51701 r) {
    return r.valor + r.id;
}
