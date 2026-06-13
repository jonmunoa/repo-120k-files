// fichero 17337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17337;

Registro17337 crear_registro17337(int id) {
    Registro17337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17337(Registro17337 r) {
    return r.valor + r.id;
}
