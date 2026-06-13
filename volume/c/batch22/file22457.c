// fichero 22457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22457;

Registro22457 crear_registro22457(int id) {
    Registro22457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22457(Registro22457 r) {
    return r.valor + r.id;
}
