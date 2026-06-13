// fichero 5457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5457;

Registro5457 crear_registro5457(int id) {
    Registro5457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5457(Registro5457 r) {
    return r.valor + r.id;
}
