// fichero 51625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51625;

Registro51625 crear_registro51625(int id) {
    Registro51625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51625(Registro51625 r) {
    return r.valor + r.id;
}
