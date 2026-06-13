// fichero 51469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51469;

Registro51469 crear_registro51469(int id) {
    Registro51469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51469(Registro51469 r) {
    return r.valor + r.id;
}
