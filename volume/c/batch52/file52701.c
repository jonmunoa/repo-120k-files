// fichero 52701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52701;

Registro52701 crear_registro52701(int id) {
    Registro52701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52701(Registro52701 r) {
    return r.valor + r.id;
}
