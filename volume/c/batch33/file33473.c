// fichero 33473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33473;

Registro33473 crear_registro33473(int id) {
    Registro33473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33473(Registro33473 r) {
    return r.valor + r.id;
}
