// fichero 51441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51441;

Registro51441 crear_registro51441(int id) {
    Registro51441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51441(Registro51441 r) {
    return r.valor + r.id;
}
