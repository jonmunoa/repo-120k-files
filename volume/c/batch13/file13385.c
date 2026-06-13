// fichero 13385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13385;

Registro13385 crear_registro13385(int id) {
    Registro13385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13385(Registro13385 r) {
    return r.valor + r.id;
}
