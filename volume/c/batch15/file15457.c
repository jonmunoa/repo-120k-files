// fichero 15457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15457;

Registro15457 crear_registro15457(int id) {
    Registro15457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15457(Registro15457 r) {
    return r.valor + r.id;
}
