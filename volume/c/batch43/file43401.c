// fichero 43401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43401;

Registro43401 crear_registro43401(int id) {
    Registro43401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43401(Registro43401 r) {
    return r.valor + r.id;
}
