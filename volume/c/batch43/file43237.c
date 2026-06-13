// fichero 43237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43237;

Registro43237 crear_registro43237(int id) {
    Registro43237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43237(Registro43237 r) {
    return r.valor + r.id;
}
