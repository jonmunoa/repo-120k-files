// fichero 54073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54073;

Registro54073 crear_registro54073(int id) {
    Registro54073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54073(Registro54073 r) {
    return r.valor + r.id;
}
