// fichero 22413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22413;

Registro22413 crear_registro22413(int id) {
    Registro22413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22413(Registro22413 r) {
    return r.valor + r.id;
}
