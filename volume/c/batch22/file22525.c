// fichero 22525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22525;

Registro22525 crear_registro22525(int id) {
    Registro22525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22525(Registro22525 r) {
    return r.valor + r.id;
}
