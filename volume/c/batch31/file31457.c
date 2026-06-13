// fichero 31457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31457;

Registro31457 crear_registro31457(int id) {
    Registro31457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31457(Registro31457 r) {
    return r.valor + r.id;
}
