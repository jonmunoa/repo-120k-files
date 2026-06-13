// fichero 38457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38457;

Registro38457 crear_registro38457(int id) {
    Registro38457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38457(Registro38457 r) {
    return r.valor + r.id;
}
