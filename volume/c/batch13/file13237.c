// fichero 13237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13237;

Registro13237 crear_registro13237(int id) {
    Registro13237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13237(Registro13237 r) {
    return r.valor + r.id;
}
