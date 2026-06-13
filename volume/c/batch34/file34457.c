// fichero 34457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34457;

Registro34457 crear_registro34457(int id) {
    Registro34457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34457(Registro34457 r) {
    return r.valor + r.id;
}
