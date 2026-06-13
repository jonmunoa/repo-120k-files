// fichero 43269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43269;

Registro43269 crear_registro43269(int id) {
    Registro43269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43269(Registro43269 r) {
    return r.valor + r.id;
}
