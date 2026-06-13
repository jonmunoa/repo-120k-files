// fichero 51641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51641;

Registro51641 crear_registro51641(int id) {
    Registro51641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51641(Registro51641 r) {
    return r.valor + r.id;
}
