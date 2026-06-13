// fichero 46441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46441;

Registro46441 crear_registro46441(int id) {
    Registro46441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46441(Registro46441 r) {
    return r.valor + r.id;
}
