// fichero 13589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13589;

Registro13589 crear_registro13589(int id) {
    Registro13589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13589(Registro13589 r) {
    return r.valor + r.id;
}
