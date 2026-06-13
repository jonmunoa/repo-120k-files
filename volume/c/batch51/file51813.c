// fichero 51813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51813;

Registro51813 crear_registro51813(int id) {
    Registro51813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51813(Registro51813 r) {
    return r.valor + r.id;
}
