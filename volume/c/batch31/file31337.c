// fichero 31337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31337;

Registro31337 crear_registro31337(int id) {
    Registro31337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31337(Registro31337 r) {
    return r.valor + r.id;
}
