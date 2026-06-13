// fichero 32457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32457;

Registro32457 crear_registro32457(int id) {
    Registro32457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32457(Registro32457 r) {
    return r.valor + r.id;
}
