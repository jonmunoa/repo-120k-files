// fichero 42653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42653;

Registro42653 crear_registro42653(int id) {
    Registro42653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42653(Registro42653 r) {
    return r.valor + r.id;
}
