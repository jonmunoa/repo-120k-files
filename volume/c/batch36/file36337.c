// fichero 36337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36337;

Registro36337 crear_registro36337(int id) {
    Registro36337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36337(Registro36337 r) {
    return r.valor + r.id;
}
