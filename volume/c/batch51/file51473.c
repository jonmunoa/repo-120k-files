// fichero 51473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51473;

Registro51473 crear_registro51473(int id) {
    Registro51473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51473(Registro51473 r) {
    return r.valor + r.id;
}
