// fichero 33405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33405;

Registro33405 crear_registro33405(int id) {
    Registro33405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33405(Registro33405 r) {
    return r.valor + r.id;
}
