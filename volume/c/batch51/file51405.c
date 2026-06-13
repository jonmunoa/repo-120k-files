// fichero 51405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51405;

Registro51405 crear_registro51405(int id) {
    Registro51405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51405(Registro51405 r) {
    return r.valor + r.id;
}
