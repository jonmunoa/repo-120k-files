// fichero 33141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33141;

Registro33141 crear_registro33141(int id) {
    Registro33141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33141(Registro33141 r) {
    return r.valor + r.id;
}
