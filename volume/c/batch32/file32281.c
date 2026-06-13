// fichero 32281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32281;

Registro32281 crear_registro32281(int id) {
    Registro32281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32281(Registro32281 r) {
    return r.valor + r.id;
}
