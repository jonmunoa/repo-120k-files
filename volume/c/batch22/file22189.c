// fichero 22189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22189;

Registro22189 crear_registro22189(int id) {
    Registro22189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22189(Registro22189 r) {
    return r.valor + r.id;
}
