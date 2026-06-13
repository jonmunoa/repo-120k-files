// fichero 43481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43481;

Registro43481 crear_registro43481(int id) {
    Registro43481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43481(Registro43481 r) {
    return r.valor + r.id;
}
