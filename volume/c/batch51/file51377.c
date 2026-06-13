// fichero 51377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51377;

Registro51377 crear_registro51377(int id) {
    Registro51377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51377(Registro51377 r) {
    return r.valor + r.id;
}
