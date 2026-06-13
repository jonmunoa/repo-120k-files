// fichero 51385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51385;

Registro51385 crear_registro51385(int id) {
    Registro51385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51385(Registro51385 r) {
    return r.valor + r.id;
}
