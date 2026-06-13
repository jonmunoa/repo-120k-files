// fichero 16457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16457;

Registro16457 crear_registro16457(int id) {
    Registro16457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16457(Registro16457 r) {
    return r.valor + r.id;
}
