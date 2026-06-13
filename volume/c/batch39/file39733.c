// fichero 39733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39733;

Registro39733 crear_registro39733(int id) {
    Registro39733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39733(Registro39733 r) {
    return r.valor + r.id;
}
