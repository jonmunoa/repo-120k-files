// fichero 43825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43825;

Registro43825 crear_registro43825(int id) {
    Registro43825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43825(Registro43825 r) {
    return r.valor + r.id;
}
