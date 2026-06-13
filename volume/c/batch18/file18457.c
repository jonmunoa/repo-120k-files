// fichero 18457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18457;

Registro18457 crear_registro18457(int id) {
    Registro18457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18457(Registro18457 r) {
    return r.valor + r.id;
}
