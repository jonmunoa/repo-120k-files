// fichero 54605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54605;

Registro54605 crear_registro54605(int id) {
    Registro54605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54605(Registro54605 r) {
    return r.valor + r.id;
}
