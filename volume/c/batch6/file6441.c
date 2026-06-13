// fichero 6441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6441;

Registro6441 crear_registro6441(int id) {
    Registro6441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6441(Registro6441 r) {
    return r.valor + r.id;
}
