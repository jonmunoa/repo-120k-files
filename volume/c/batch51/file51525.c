// fichero 51525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51525;

Registro51525 crear_registro51525(int id) {
    Registro51525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51525(Registro51525 r) {
    return r.valor + r.id;
}
