// fichero 51281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51281;

Registro51281 crear_registro51281(int id) {
    Registro51281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51281(Registro51281 r) {
    return r.valor + r.id;
}
