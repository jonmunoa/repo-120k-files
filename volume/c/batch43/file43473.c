// fichero 43473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43473;

Registro43473 crear_registro43473(int id) {
    Registro43473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43473(Registro43473 r) {
    return r.valor + r.id;
}
