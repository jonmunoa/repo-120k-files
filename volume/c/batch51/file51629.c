// fichero 51629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51629;

Registro51629 crear_registro51629(int id) {
    Registro51629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51629(Registro51629 r) {
    return r.valor + r.id;
}
