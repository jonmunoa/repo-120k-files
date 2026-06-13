// fichero 32337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32337;

Registro32337 crear_registro32337(int id) {
    Registro32337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32337(Registro32337 r) {
    return r.valor + r.id;
}
