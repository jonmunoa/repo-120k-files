// fichero 22389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22389;

Registro22389 crear_registro22389(int id) {
    Registro22389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22389(Registro22389 r) {
    return r.valor + r.id;
}
