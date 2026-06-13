// fichero 15173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15173;

Registro15173 crear_registro15173(int id) {
    Registro15173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15173(Registro15173 r) {
    return r.valor + r.id;
}
