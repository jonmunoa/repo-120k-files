// fichero 42253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42253;

Registro42253 crear_registro42253(int id) {
    Registro42253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42253(Registro42253 r) {
    return r.valor + r.id;
}
