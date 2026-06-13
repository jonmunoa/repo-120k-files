// fichero 51457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51457;

Registro51457 crear_registro51457(int id) {
    Registro51457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51457(Registro51457 r) {
    return r.valor + r.id;
}
