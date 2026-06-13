// fichero 43597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43597;

Registro43597 crear_registro43597(int id) {
    Registro43597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43597(Registro43597 r) {
    return r.valor + r.id;
}
