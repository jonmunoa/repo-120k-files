// fichero 51733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51733;

Registro51733 crear_registro51733(int id) {
    Registro51733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51733(Registro51733 r) {
    return r.valor + r.id;
}
