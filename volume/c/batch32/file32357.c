// fichero 32357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32357;

Registro32357 crear_registro32357(int id) {
    Registro32357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32357(Registro32357 r) {
    return r.valor + r.id;
}
