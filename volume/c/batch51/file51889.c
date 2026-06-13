// fichero 51889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51889;

Registro51889 crear_registro51889(int id) {
    Registro51889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51889(Registro51889 r) {
    return r.valor + r.id;
}
