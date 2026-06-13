// fichero 7725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7725;

Registro7725 crear_registro7725(int id) {
    Registro7725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7725(Registro7725 r) {
    return r.valor + r.id;
}
