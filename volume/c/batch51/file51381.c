// fichero 51381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51381;

Registro51381 crear_registro51381(int id) {
    Registro51381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51381(Registro51381 r) {
    return r.valor + r.id;
}
