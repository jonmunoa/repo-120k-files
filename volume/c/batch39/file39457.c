// fichero 39457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39457;

Registro39457 crear_registro39457(int id) {
    Registro39457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39457(Registro39457 r) {
    return r.valor + r.id;
}
