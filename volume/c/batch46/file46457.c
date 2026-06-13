// fichero 46457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46457;

Registro46457 crear_registro46457(int id) {
    Registro46457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46457(Registro46457 r) {
    return r.valor + r.id;
}
