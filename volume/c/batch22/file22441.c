// fichero 22441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22441;

Registro22441 crear_registro22441(int id) {
    Registro22441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22441(Registro22441 r) {
    return r.valor + r.id;
}
