// fichero 32385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32385;

Registro32385 crear_registro32385(int id) {
    Registro32385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32385(Registro32385 r) {
    return r.valor + r.id;
}
