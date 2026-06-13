// fichero 15813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15813;

Registro15813 crear_registro15813(int id) {
    Registro15813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15813(Registro15813 r) {
    return r.valor + r.id;
}
