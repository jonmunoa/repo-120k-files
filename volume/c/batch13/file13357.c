// fichero 13357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13357;

Registro13357 crear_registro13357(int id) {
    Registro13357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13357(Registro13357 r) {
    return r.valor + r.id;
}
