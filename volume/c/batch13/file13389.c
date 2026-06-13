// fichero 13389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13389;

Registro13389 crear_registro13389(int id) {
    Registro13389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13389(Registro13389 r) {
    return r.valor + r.id;
}
