// fichero 32189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32189;

Registro32189 crear_registro32189(int id) {
    Registro32189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32189(Registro32189 r) {
    return r.valor + r.id;
}
