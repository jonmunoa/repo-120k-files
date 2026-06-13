// fichero 54189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54189;

Registro54189 crear_registro54189(int id) {
    Registro54189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54189(Registro54189 r) {
    return r.valor + r.id;
}
