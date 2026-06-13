// fichero 33701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33701;

Registro33701 crear_registro33701(int id) {
    Registro33701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33701(Registro33701 r) {
    return r.valor + r.id;
}
