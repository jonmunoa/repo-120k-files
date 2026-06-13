// fichero 18337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18337;

Registro18337 crear_registro18337(int id) {
    Registro18337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18337(Registro18337 r) {
    return r.valor + r.id;
}
