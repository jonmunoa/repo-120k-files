// fichero 43253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43253;

Registro43253 crear_registro43253(int id) {
    Registro43253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43253(Registro43253 r) {
    return r.valor + r.id;
}
