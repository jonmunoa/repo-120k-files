// fichero 3337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3337;

Registro3337 crear_registro3337(int id) {
    Registro3337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3337(Registro3337 r) {
    return r.valor + r.id;
}
