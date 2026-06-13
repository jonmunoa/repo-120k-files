// fichero 18473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18473;

Registro18473 crear_registro18473(int id) {
    Registro18473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18473(Registro18473 r) {
    return r.valor + r.id;
}
