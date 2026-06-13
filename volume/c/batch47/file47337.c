// fichero 47337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47337;

Registro47337 crear_registro47337(int id) {
    Registro47337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47337(Registro47337 r) {
    return r.valor + r.id;
}
