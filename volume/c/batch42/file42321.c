// fichero 42321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42321;

Registro42321 crear_registro42321(int id) {
    Registro42321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42321(Registro42321 r) {
    return r.valor + r.id;
}
