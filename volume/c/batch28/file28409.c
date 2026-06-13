// fichero 28409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28409;

Registro28409 crear_registro28409(int id) {
    Registro28409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28409(Registro28409 r) {
    return r.valor + r.id;
}
