// fichero 46321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46321;

Registro46321 crear_registro46321(int id) {
    Registro46321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46321(Registro46321 r) {
    return r.valor + r.id;
}
