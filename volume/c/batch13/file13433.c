// fichero 13433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13433;

Registro13433 crear_registro13433(int id) {
    Registro13433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13433(Registro13433 r) {
    return r.valor + r.id;
}
