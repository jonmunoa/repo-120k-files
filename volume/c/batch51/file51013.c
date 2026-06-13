// fichero 51013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51013;

Registro51013 crear_registro51013(int id) {
    Registro51013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51013(Registro51013 r) {
    return r.valor + r.id;
}
