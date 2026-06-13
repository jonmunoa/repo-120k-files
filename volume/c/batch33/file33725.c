// fichero 33725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33725;

Registro33725 crear_registro33725(int id) {
    Registro33725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33725(Registro33725 r) {
    return r.valor + r.id;
}
