// fichero 48377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48377;

Registro48377 crear_registro48377(int id) {
    Registro48377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48377(Registro48377 r) {
    return r.valor + r.id;
}
