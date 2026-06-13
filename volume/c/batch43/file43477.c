// fichero 43477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43477;

Registro43477 crear_registro43477(int id) {
    Registro43477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43477(Registro43477 r) {
    return r.valor + r.id;
}
