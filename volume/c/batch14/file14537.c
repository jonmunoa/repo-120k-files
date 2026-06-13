// fichero 14537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14537;

Registro14537 crear_registro14537(int id) {
    Registro14537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14537(Registro14537 r) {
    return r.valor + r.id;
}
