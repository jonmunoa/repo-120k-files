// fichero 43101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43101;

Registro43101 crear_registro43101(int id) {
    Registro43101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43101(Registro43101 r) {
    return r.valor + r.id;
}
