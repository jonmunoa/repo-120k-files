// fichero 16441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16441;

Registro16441 crear_registro16441(int id) {
    Registro16441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16441(Registro16441 r) {
    return r.valor + r.id;
}
