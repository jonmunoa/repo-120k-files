// fichero 54473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54473;

Registro54473 crear_registro54473(int id) {
    Registro54473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54473(Registro54473 r) {
    return r.valor + r.id;
}
