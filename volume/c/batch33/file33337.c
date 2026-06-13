// fichero 33337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33337;

Registro33337 crear_registro33337(int id) {
    Registro33337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33337(Registro33337 r) {
    return r.valor + r.id;
}
