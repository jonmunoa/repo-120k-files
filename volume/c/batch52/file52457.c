// fichero 52457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52457;

Registro52457 crear_registro52457(int id) {
    Registro52457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52457(Registro52457 r) {
    return r.valor + r.id;
}
