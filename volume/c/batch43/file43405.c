// fichero 43405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43405;

Registro43405 crear_registro43405(int id) {
    Registro43405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43405(Registro43405 r) {
    return r.valor + r.id;
}
