// fichero 51029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51029;

Registro51029 crear_registro51029(int id) {
    Registro51029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51029(Registro51029 r) {
    return r.valor + r.id;
}
