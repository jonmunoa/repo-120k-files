// fichero 51601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51601;

Registro51601 crear_registro51601(int id) {
    Registro51601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51601(Registro51601 r) {
    return r.valor + r.id;
}
