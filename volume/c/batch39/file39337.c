// fichero 39337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39337;

Registro39337 crear_registro39337(int id) {
    Registro39337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39337(Registro39337 r) {
    return r.valor + r.id;
}
