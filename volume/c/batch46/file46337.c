// fichero 46337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46337;

Registro46337 crear_registro46337(int id) {
    Registro46337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46337(Registro46337 r) {
    return r.valor + r.id;
}
