// fichero 51233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51233;

Registro51233 crear_registro51233(int id) {
    Registro51233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51233(Registro51233 r) {
    return r.valor + r.id;
}
