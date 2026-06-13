// fichero 22481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22481;

Registro22481 crear_registro22481(int id) {
    Registro22481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22481(Registro22481 r) {
    return r.valor + r.id;
}
