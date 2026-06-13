// fichero 51505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51505;

Registro51505 crear_registro51505(int id) {
    Registro51505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51505(Registro51505 r) {
    return r.valor + r.id;
}
