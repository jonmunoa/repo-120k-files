// fichero 21337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21337;

Registro21337 crear_registro21337(int id) {
    Registro21337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21337(Registro21337 r) {
    return r.valor + r.id;
}
