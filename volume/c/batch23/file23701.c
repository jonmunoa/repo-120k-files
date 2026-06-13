// fichero 23701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23701;

Registro23701 crear_registro23701(int id) {
    Registro23701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23701(Registro23701 r) {
    return r.valor + r.id;
}
