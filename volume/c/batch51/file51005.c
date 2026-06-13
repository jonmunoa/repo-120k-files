// fichero 51005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51005;

Registro51005 crear_registro51005(int id) {
    Registro51005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51005(Registro51005 r) {
    return r.valor + r.id;
}
