// fichero 43441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43441;

Registro43441 crear_registro43441(int id) {
    Registro43441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43441(Registro43441 r) {
    return r.valor + r.id;
}
