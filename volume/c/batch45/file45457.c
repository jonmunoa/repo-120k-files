// fichero 45457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45457;

Registro45457 crear_registro45457(int id) {
    Registro45457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45457(Registro45457 r) {
    return r.valor + r.id;
}
