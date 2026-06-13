// fichero 43457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43457;

Registro43457 crear_registro43457(int id) {
    Registro43457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43457(Registro43457 r) {
    return r.valor + r.id;
}
