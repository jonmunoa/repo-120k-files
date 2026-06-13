// fichero 13089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13089;

Registro13089 crear_registro13089(int id) {
    Registro13089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13089(Registro13089 r) {
    return r.valor + r.id;
}
