// fichero 51357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51357;

Registro51357 crear_registro51357(int id) {
    Registro51357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51357(Registro51357 r) {
    return r.valor + r.id;
}
