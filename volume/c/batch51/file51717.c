// fichero 51717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51717;

Registro51717 crear_registro51717(int id) {
    Registro51717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51717(Registro51717 r) {
    return r.valor + r.id;
}
