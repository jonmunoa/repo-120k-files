// fichero 22305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22305;

Registro22305 crear_registro22305(int id) {
    Registro22305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22305(Registro22305 r) {
    return r.valor + r.id;
}
