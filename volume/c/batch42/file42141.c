// fichero 42141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42141;

Registro42141 crear_registro42141(int id) {
    Registro42141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42141(Registro42141 r) {
    return r.valor + r.id;
}
