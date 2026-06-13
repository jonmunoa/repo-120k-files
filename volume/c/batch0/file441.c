// fichero 441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro441;

Registro441 crear_registro441(int id) {
    Registro441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro441(Registro441 r) {
    return r.valor + r.id;
}
