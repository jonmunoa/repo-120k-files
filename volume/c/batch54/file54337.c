// fichero 54337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54337;

Registro54337 crear_registro54337(int id) {
    Registro54337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54337(Registro54337 r) {
    return r.valor + r.id;
}
