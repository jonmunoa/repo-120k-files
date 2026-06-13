// fichero 15337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15337;

Registro15337 crear_registro15337(int id) {
    Registro15337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15337(Registro15337 r) {
    return r.valor + r.id;
}
