// fichero 13201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13201;

Registro13201 crear_registro13201(int id) {
    Registro13201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13201(Registro13201 r) {
    return r.valor + r.id;
}
