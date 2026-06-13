// fichero 27457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27457;

Registro27457 crear_registro27457(int id) {
    Registro27457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27457(Registro27457 r) {
    return r.valor + r.id;
}
