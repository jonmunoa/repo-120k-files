// fichero 23197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23197;

Registro23197 crear_registro23197(int id) {
    Registro23197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23197(Registro23197 r) {
    return r.valor + r.id;
}
