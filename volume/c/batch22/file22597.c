// fichero 22597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22597;

Registro22597 crear_registro22597(int id) {
    Registro22597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22597(Registro22597 r) {
    return r.valor + r.id;
}
