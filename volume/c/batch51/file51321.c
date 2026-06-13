// fichero 51321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51321;

Registro51321 crear_registro51321(int id) {
    Registro51321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51321(Registro51321 r) {
    return r.valor + r.id;
}
