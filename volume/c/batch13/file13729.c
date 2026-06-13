// fichero 13729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13729;

Registro13729 crear_registro13729(int id) {
    Registro13729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13729(Registro13729 r) {
    return r.valor + r.id;
}
