// fichero 51413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51413;

Registro51413 crear_registro51413(int id) {
    Registro51413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51413(Registro51413 r) {
    return r.valor + r.id;
}
