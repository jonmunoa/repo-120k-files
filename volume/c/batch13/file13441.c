// fichero 13441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13441;

Registro13441 crear_registro13441(int id) {
    Registro13441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13441(Registro13441 r) {
    return r.valor + r.id;
}
