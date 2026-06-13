// fichero 36457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36457;

Registro36457 crear_registro36457(int id) {
    Registro36457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36457(Registro36457 r) {
    return r.valor + r.id;
}
