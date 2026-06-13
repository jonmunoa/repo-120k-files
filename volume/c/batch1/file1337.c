// fichero 1337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1337;

Registro1337 crear_registro1337(int id) {
    Registro1337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1337(Registro1337 r) {
    return r.valor + r.id;
}
