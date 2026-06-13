// fichero 53141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53141;

Registro53141 crear_registro53141(int id) {
    Registro53141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53141(Registro53141 r) {
    return r.valor + r.id;
}
