// fichero 22269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22269;

Registro22269 crear_registro22269(int id) {
    Registro22269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22269(Registro22269 r) {
    return r.valor + r.id;
}
