// fichero 54021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54021;

Registro54021 crear_registro54021(int id) {
    Registro54021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54021(Registro54021 r) {
    return r.valor + r.id;
}
