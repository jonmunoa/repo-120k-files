// fichero 49457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49457;

Registro49457 crear_registro49457(int id) {
    Registro49457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49457(Registro49457 r) {
    return r.valor + r.id;
}
