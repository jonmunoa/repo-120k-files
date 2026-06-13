// fichero 22033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22033;

Registro22033 crear_registro22033(int id) {
    Registro22033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22033(Registro22033 r) {
    return r.valor + r.id;
}
