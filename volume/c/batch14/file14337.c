// fichero 14337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14337;

Registro14337 crear_registro14337(int id) {
    Registro14337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14337(Registro14337 r) {
    return r.valor + r.id;
}
