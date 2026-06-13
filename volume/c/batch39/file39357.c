// fichero 39357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39357;

Registro39357 crear_registro39357(int id) {
    Registro39357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39357(Registro39357 r) {
    return r.valor + r.id;
}
