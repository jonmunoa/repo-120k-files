// fichero 51561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51561;

Registro51561 crear_registro51561(int id) {
    Registro51561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51561(Registro51561 r) {
    return r.valor + r.id;
}
