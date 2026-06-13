// fichero 51673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51673;

Registro51673 crear_registro51673(int id) {
    Registro51673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51673(Registro51673 r) {
    return r.valor + r.id;
}
