// fichero 32481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32481;

Registro32481 crear_registro32481(int id) {
    Registro32481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32481(Registro32481 r) {
    return r.valor + r.id;
}
