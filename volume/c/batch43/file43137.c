// fichero 43137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43137;

Registro43137 crear_registro43137(int id) {
    Registro43137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43137(Registro43137 r) {
    return r.valor + r.id;
}
