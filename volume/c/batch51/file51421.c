// fichero 51421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51421;

Registro51421 crear_registro51421(int id) {
    Registro51421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51421(Registro51421 r) {
    return r.valor + r.id;
}
