// fichero 13097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13097;

Registro13097 crear_registro13097(int id) {
    Registro13097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13097(Registro13097 r) {
    return r.valor + r.id;
}
