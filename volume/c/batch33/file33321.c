// fichero 33321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33321;

Registro33321 crear_registro33321(int id) {
    Registro33321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33321(Registro33321 r) {
    return r.valor + r.id;
}
