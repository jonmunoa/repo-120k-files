// fichero 45441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45441;

Registro45441 crear_registro45441(int id) {
    Registro45441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45441(Registro45441 r) {
    return r.valor + r.id;
}
