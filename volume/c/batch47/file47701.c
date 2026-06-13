// fichero 47701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47701;

Registro47701 crear_registro47701(int id) {
    Registro47701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47701(Registro47701 r) {
    return r.valor + r.id;
}
