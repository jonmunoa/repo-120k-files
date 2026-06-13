// fichero 13757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13757;

Registro13757 crear_registro13757(int id) {
    Registro13757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13757(Registro13757 r) {
    return r.valor + r.id;
}
