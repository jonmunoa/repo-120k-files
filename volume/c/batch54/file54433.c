// fichero 54433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54433;

Registro54433 crear_registro54433(int id) {
    Registro54433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54433(Registro54433 r) {
    return r.valor + r.id;
}
