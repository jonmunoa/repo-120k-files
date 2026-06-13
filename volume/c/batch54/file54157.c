// fichero 54157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54157;

Registro54157 crear_registro54157(int id) {
    Registro54157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54157(Registro54157 r) {
    return r.valor + r.id;
}
