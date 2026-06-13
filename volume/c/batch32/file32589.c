// fichero 32589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32589;

Registro32589 crear_registro32589(int id) {
    Registro32589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32589(Registro32589 r) {
    return r.valor + r.id;
}
