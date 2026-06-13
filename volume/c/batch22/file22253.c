// fichero 22253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22253;

Registro22253 crear_registro22253(int id) {
    Registro22253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22253(Registro22253 r) {
    return r.valor + r.id;
}
