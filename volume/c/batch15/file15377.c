// fichero 15377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15377;

Registro15377 crear_registro15377(int id) {
    Registro15377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15377(Registro15377 r) {
    return r.valor + r.id;
}
