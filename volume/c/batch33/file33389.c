// fichero 33389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33389;

Registro33389 crear_registro33389(int id) {
    Registro33389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33389(Registro33389 r) {
    return r.valor + r.id;
}
