// fichero 38701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38701;

Registro38701 crear_registro38701(int id) {
    Registro38701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38701(Registro38701 r) {
    return r.valor + r.id;
}
