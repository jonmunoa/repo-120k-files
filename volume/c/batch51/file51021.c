// fichero 51021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51021;

Registro51021 crear_registro51021(int id) {
    Registro51021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51021(Registro51021 r) {
    return r.valor + r.id;
}
