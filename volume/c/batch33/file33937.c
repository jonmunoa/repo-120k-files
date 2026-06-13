// fichero 33937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33937;

Registro33937 crear_registro33937(int id) {
    Registro33937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33937(Registro33937 r) {
    return r.valor + r.id;
}
