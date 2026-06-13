// fichero 13561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13561;

Registro13561 crear_registro13561(int id) {
    Registro13561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13561(Registro13561 r) {
    return r.valor + r.id;
}
