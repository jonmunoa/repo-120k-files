// fichero 13213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13213;

Registro13213 crear_registro13213(int id) {
    Registro13213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13213(Registro13213 r) {
    return r.valor + r.id;
}
