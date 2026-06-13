// fichero 42421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42421;

Registro42421 crear_registro42421(int id) {
    Registro42421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42421(Registro42421 r) {
    return r.valor + r.id;
}
