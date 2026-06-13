// fichero 4441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4441;

Registro4441 crear_registro4441(int id) {
    Registro4441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4441(Registro4441 r) {
    return r.valor + r.id;
}
