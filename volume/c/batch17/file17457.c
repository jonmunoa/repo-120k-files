// fichero 17457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17457;

Registro17457 crear_registro17457(int id) {
    Registro17457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17457(Registro17457 r) {
    return r.valor + r.id;
}
