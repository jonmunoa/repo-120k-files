// fichero 28337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28337;

Registro28337 crear_registro28337(int id) {
    Registro28337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28337(Registro28337 r) {
    return r.valor + r.id;
}
