// fichero 33629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33629;

Registro33629 crear_registro33629(int id) {
    Registro33629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33629(Registro33629 r) {
    return r.valor + r.id;
}
