// fichero 43141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43141;

Registro43141 crear_registro43141(int id) {
    Registro43141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43141(Registro43141 r) {
    return r.valor + r.id;
}
