// fichero 32253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32253;

Registro32253 crear_registro32253(int id) {
    Registro32253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32253(Registro32253 r) {
    return r.valor + r.id;
}
