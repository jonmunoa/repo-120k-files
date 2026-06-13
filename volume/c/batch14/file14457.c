// fichero 14457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14457;

Registro14457 crear_registro14457(int id) {
    Registro14457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14457(Registro14457 r) {
    return r.valor + r.id;
}
