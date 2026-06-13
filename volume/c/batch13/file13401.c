// fichero 13401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13401;

Registro13401 crear_registro13401(int id) {
    Registro13401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13401(Registro13401 r) {
    return r.valor + r.id;
}
