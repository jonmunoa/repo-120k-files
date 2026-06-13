// fichero 4141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4141;

Registro4141 crear_registro4141(int id) {
    Registro4141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4141(Registro4141 r) {
    return r.valor + r.id;
}
