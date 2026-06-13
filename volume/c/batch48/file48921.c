// fichero 48921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48921;

Registro48921 crear_registro48921(int id) {
    Registro48921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48921(Registro48921 r) {
    return r.valor + r.id;
}
