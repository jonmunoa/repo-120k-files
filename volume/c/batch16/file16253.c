// fichero 16253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16253;

Registro16253 crear_registro16253(int id) {
    Registro16253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16253(Registro16253 r) {
    return r.valor + r.id;
}
