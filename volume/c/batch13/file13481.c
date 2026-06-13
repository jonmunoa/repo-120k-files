// fichero 13481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13481;

Registro13481 crear_registro13481(int id) {
    Registro13481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13481(Registro13481 r) {
    return r.valor + r.id;
}
