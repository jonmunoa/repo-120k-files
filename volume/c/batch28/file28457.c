// fichero 28457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28457;

Registro28457 crear_registro28457(int id) {
    Registro28457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28457(Registro28457 r) {
    return r.valor + r.id;
}
