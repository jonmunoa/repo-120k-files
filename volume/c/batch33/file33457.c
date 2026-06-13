// fichero 33457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33457;

Registro33457 crear_registro33457(int id) {
    Registro33457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33457(Registro33457 r) {
    return r.valor + r.id;
}
