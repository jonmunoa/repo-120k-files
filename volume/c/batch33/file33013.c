// fichero 33013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33013;

Registro33013 crear_registro33013(int id) {
    Registro33013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33013(Registro33013 r) {
    return r.valor + r.id;
}
