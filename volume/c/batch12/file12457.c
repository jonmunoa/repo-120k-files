// fichero 12457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12457;

Registro12457 crear_registro12457(int id) {
    Registro12457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12457(Registro12457 r) {
    return r.valor + r.id;
}
