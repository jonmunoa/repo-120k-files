// fichero 37457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37457;

Registro37457 crear_registro37457(int id) {
    Registro37457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37457(Registro37457 r) {
    return r.valor + r.id;
}
