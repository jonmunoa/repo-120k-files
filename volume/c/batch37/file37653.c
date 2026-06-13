// fichero 37653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37653;

Registro37653 crear_registro37653(int id) {
    Registro37653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37653(Registro37653 r) {
    return r.valor + r.id;
}
