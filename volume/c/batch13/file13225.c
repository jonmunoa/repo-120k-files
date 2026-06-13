// fichero 13225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13225;

Registro13225 crear_registro13225(int id) {
    Registro13225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13225(Registro13225 r) {
    return r.valor + r.id;
}
