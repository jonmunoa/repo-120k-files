// fichero 13273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13273;

Registro13273 crear_registro13273(int id) {
    Registro13273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13273(Registro13273 r) {
    return r.valor + r.id;
}
