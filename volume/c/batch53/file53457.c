// fichero 53457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53457;

Registro53457 crear_registro53457(int id) {
    Registro53457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53457(Registro53457 r) {
    return r.valor + r.id;
}
