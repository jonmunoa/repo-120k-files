// fichero 22297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22297;

Registro22297 crear_registro22297(int id) {
    Registro22297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22297(Registro22297 r) {
    return r.valor + r.id;
}
