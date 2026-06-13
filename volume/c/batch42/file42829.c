// fichero 42829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42829;

Registro42829 crear_registro42829(int id) {
    Registro42829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42829(Registro42829 r) {
    return r.valor + r.id;
}
