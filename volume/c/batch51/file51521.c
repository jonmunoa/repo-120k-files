// fichero 51521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51521;

Registro51521 crear_registro51521(int id) {
    Registro51521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51521(Registro51521 r) {
    return r.valor + r.id;
}
