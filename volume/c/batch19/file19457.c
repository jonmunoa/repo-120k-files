// fichero 19457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19457;

Registro19457 crear_registro19457(int id) {
    Registro19457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19457(Registro19457 r) {
    return r.valor + r.id;
}
