// fichero 47457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47457;

Registro47457 crear_registro47457(int id) {
    Registro47457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47457(Registro47457 r) {
    return r.valor + r.id;
}
