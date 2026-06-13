// fichero 30337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30337;

Registro30337 crear_registro30337(int id) {
    Registro30337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30337(Registro30337 r) {
    return r.valor + r.id;
}
