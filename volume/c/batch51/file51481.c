// fichero 51481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51481;

Registro51481 crear_registro51481(int id) {
    Registro51481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51481(Registro51481 r) {
    return r.valor + r.id;
}
