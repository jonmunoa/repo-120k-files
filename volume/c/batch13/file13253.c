// fichero 13253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13253;

Registro13253 crear_registro13253(int id) {
    Registro13253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13253(Registro13253 r) {
    return r.valor + r.id;
}
