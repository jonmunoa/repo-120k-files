// fichero 51825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51825;

Registro51825 crear_registro51825(int id) {
    Registro51825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51825(Registro51825 r) {
    return r.valor + r.id;
}
