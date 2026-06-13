// fichero 17701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17701;

Registro17701 crear_registro17701(int id) {
    Registro17701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17701(Registro17701 r) {
    return r.valor + r.id;
}
