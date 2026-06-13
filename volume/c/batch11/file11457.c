// fichero 11457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11457;

Registro11457 crear_registro11457(int id) {
    Registro11457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11457(Registro11457 r) {
    return r.valor + r.id;
}
