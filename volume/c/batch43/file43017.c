// fichero 43017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43017;

Registro43017 crear_registro43017(int id) {
    Registro43017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43017(Registro43017 r) {
    return r.valor + r.id;
}
