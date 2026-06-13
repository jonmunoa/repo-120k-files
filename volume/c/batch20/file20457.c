// fichero 20457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20457;

Registro20457 crear_registro20457(int id) {
    Registro20457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20457(Registro20457 r) {
    return r.valor + r.id;
}
