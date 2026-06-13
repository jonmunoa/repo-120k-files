// fichero 457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro457;

Registro457 crear_registro457(int id) {
    Registro457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro457(Registro457 r) {
    return r.valor + r.id;
}
