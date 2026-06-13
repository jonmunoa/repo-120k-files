// fichero 51177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51177;

Registro51177 crear_registro51177(int id) {
    Registro51177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51177(Registro51177 r) {
    return r.valor + r.id;
}
