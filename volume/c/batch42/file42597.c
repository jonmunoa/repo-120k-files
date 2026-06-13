// fichero 42597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42597;

Registro42597 crear_registro42597(int id) {
    Registro42597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42597(Registro42597 r) {
    return r.valor + r.id;
}
