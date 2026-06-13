// fichero 28341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28341;

Registro28341 crear_registro28341(int id) {
    Registro28341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28341(Registro28341 r) {
    return r.valor + r.id;
}
