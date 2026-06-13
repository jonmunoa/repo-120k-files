// fichero 13605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13605;

Registro13605 crear_registro13605(int id) {
    Registro13605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13605(Registro13605 r) {
    return r.valor + r.id;
}
