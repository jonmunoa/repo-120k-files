// fichero 13233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13233;

Registro13233 crear_registro13233(int id) {
    Registro13233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13233(Registro13233 r) {
    return r.valor + r.id;
}
