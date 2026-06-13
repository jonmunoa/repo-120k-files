// fichero 29537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29537;

Registro29537 crear_registro29537(int id) {
    Registro29537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29537(Registro29537 r) {
    return r.valor + r.id;
}
