// fichero 51033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51033;

Registro51033 crear_registro51033(int id) {
    Registro51033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51033(Registro51033 r) {
    return r.valor + r.id;
}
