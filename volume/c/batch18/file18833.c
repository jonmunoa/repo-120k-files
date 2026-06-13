// fichero 18833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18833;

Registro18833 crear_registro18833(int id) {
    Registro18833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18833(Registro18833 r) {
    return r.valor + r.id;
}
