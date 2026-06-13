// fichero 20245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20245;

Registro20245 crear_registro20245(int id) {
    Registro20245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20245(Registro20245 r) {
    return r.valor + r.id;
}
