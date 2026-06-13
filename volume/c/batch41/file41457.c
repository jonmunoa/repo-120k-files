// fichero 41457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41457;

Registro41457 crear_registro41457(int id) {
    Registro41457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41457(Registro41457 r) {
    return r.valor + r.id;
}
