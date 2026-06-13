// fichero 6337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6337;

Registro6337 crear_registro6337(int id) {
    Registro6337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6337(Registro6337 r) {
    return r.valor + r.id;
}
