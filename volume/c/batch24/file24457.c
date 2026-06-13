// fichero 24457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24457;

Registro24457 crear_registro24457(int id) {
    Registro24457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24457(Registro24457 r) {
    return r.valor + r.id;
}
