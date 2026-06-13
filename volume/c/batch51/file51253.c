// fichero 51253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51253;

Registro51253 crear_registro51253(int id) {
    Registro51253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51253(Registro51253 r) {
    return r.valor + r.id;
}
