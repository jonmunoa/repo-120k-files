// fichero 48453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48453;

Registro48453 crear_registro48453(int id) {
    Registro48453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48453(Registro48453 r) {
    return r.valor + r.id;
}
