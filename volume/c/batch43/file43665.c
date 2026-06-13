// fichero 43665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43665;

Registro43665 crear_registro43665(int id) {
    Registro43665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43665(Registro43665 r) {
    return r.valor + r.id;
}
