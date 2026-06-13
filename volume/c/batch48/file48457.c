// fichero 48457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48457;

Registro48457 crear_registro48457(int id) {
    Registro48457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48457(Registro48457 r) {
    return r.valor + r.id;
}
