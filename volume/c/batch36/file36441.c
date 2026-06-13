// fichero 36441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36441;

Registro36441 crear_registro36441(int id) {
    Registro36441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36441(Registro36441 r) {
    return r.valor + r.id;
}
