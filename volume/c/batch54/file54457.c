// fichero 54457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54457;

Registro54457 crear_registro54457(int id) {
    Registro54457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54457(Registro54457 r) {
    return r.valor + r.id;
}
