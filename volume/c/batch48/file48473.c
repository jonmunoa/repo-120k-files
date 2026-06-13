// fichero 48473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48473;

Registro48473 crear_registro48473(int id) {
    Registro48473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48473(Registro48473 r) {
    return r.valor + r.id;
}
