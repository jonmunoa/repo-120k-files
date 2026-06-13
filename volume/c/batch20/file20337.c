// fichero 20337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20337;

Registro20337 crear_registro20337(int id) {
    Registro20337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20337(Registro20337 r) {
    return r.valor + r.id;
}
