// fichero 51245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51245;

Registro51245 crear_registro51245(int id) {
    Registro51245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51245(Registro51245 r) {
    return r.valor + r.id;
}
