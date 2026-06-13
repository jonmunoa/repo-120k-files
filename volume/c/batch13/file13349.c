// fichero 13349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13349;

Registro13349 crear_registro13349(int id) {
    Registro13349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13349(Registro13349 r) {
    return r.valor + r.id;
}
