// fichero 13457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13457;

Registro13457 crear_registro13457(int id) {
    Registro13457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13457(Registro13457 r) {
    return r.valor + r.id;
}
