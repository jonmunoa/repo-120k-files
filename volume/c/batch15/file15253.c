// fichero 15253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15253;

Registro15253 crear_registro15253(int id) {
    Registro15253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15253(Registro15253 r) {
    return r.valor + r.id;
}
