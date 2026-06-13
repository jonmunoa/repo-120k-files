// fichero 33729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33729;

Registro33729 crear_registro33729(int id) {
    Registro33729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33729(Registro33729 r) {
    return r.valor + r.id;
}
