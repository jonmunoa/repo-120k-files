// fichero 43205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43205;

Registro43205 crear_registro43205(int id) {
    Registro43205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43205(Registro43205 r) {
    return r.valor + r.id;
}
