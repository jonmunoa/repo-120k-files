// fichero 51429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51429;

Registro51429 crear_registro51429(int id) {
    Registro51429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51429(Registro51429 r) {
    return r.valor + r.id;
}
