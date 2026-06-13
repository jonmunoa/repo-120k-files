// fichero 51989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51989;

Registro51989 crear_registro51989(int id) {
    Registro51989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51989(Registro51989 r) {
    return r.valor + r.id;
}
