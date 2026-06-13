// fichero 22337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22337;

Registro22337 crear_registro22337(int id) {
    Registro22337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22337(Registro22337 r) {
    return r.valor + r.id;
}
