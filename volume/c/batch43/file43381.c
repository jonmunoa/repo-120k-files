// fichero 43381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43381;

Registro43381 crear_registro43381(int id) {
    Registro43381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43381(Registro43381 r) {
    return r.valor + r.id;
}
