// fichero 22385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22385;

Registro22385 crear_registro22385(int id) {
    Registro22385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22385(Registro22385 r) {
    return r.valor + r.id;
}
