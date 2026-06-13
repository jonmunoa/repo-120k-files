// fichero 54393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54393;

Registro54393 crear_registro54393(int id) {
    Registro54393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54393(Registro54393 r) {
    return r.valor + r.id;
}
