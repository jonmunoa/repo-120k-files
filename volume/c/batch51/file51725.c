// fichero 51725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51725;

Registro51725 crear_registro51725(int id) {
    Registro51725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51725(Registro51725 r) {
    return r.valor + r.id;
}
