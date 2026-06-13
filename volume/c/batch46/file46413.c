// fichero 46413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46413;

Registro46413 crear_registro46413(int id) {
    Registro46413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46413(Registro46413 r) {
    return r.valor + r.id;
}
