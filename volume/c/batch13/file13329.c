// fichero 13329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13329;

Registro13329 crear_registro13329(int id) {
    Registro13329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13329(Registro13329 r) {
    return r.valor + r.id;
}
