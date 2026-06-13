// fichero 32269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32269;

Registro32269 crear_registro32269(int id) {
    Registro32269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32269(Registro32269 r) {
    return r.valor + r.id;
}
