// fichero 51433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51433;

Registro51433 crear_registro51433(int id) {
    Registro51433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51433(Registro51433 r) {
    return r.valor + r.id;
}
