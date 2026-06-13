// fichero 30457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30457;

Registro30457 crear_registro30457(int id) {
    Registro30457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30457(Registro30457 r) {
    return r.valor + r.id;
}
