// fichero 33481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33481;

Registro33481 crear_registro33481(int id) {
    Registro33481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33481(Registro33481 r) {
    return r.valor + r.id;
}
