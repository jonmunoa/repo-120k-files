// fichero 3457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3457;

Registro3457 crear_registro3457(int id) {
    Registro3457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3457(Registro3457 r) {
    return r.valor + r.id;
}
