// fichero 43013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43013;

Registro43013 crear_registro43013(int id) {
    Registro43013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43013(Registro43013 r) {
    return r.valor + r.id;
}
