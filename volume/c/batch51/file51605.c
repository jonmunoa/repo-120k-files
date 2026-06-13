// fichero 51605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51605;

Registro51605 crear_registro51605(int id) {
    Registro51605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51605(Registro51605 r) {
    return r.valor + r.id;
}
