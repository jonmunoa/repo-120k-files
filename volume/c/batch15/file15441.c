// fichero 15441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15441;

Registro15441 crear_registro15441(int id) {
    Registro15441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15441(Registro15441 r) {
    return r.valor + r.id;
}
