// fichero 51589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51589;

Registro51589 crear_registro51589(int id) {
    Registro51589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51589(Registro51589 r) {
    return r.valor + r.id;
}
