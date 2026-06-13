// fichero 51069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51069;

Registro51069 crear_registro51069(int id) {
    Registro51069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51069(Registro51069 r) {
    return r.valor + r.id;
}
