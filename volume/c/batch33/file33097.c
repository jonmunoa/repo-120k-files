// fichero 33097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33097;

Registro33097 crear_registro33097(int id) {
    Registro33097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33097(Registro33097 r) {
    return r.valor + r.id;
}
