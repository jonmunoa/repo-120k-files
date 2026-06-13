// fichero 13629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13629;

Registro13629 crear_registro13629(int id) {
    Registro13629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13629(Registro13629 r) {
    return r.valor + r.id;
}
