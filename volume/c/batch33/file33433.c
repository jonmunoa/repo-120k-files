// fichero 33433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33433;

Registro33433 crear_registro33433(int id) {
    Registro33433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33433(Registro33433 r) {
    return r.valor + r.id;
}
