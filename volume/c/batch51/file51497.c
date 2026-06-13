// fichero 51497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51497;

Registro51497 crear_registro51497(int id) {
    Registro51497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51497(Registro51497 r) {
    return r.valor + r.id;
}
