// fichero 51937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51937;

Registro51937 crear_registro51937(int id) {
    Registro51937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51937(Registro51937 r) {
    return r.valor + r.id;
}
