// fichero 13021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13021;

Registro13021 crear_registro13021(int id) {
    Registro13021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13021(Registro13021 r) {
    return r.valor + r.id;
}
