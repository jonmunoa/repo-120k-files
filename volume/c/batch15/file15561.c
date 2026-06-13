// fichero 15561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15561;

Registro15561 crear_registro15561(int id) {
    Registro15561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15561(Registro15561 r) {
    return r.valor + r.id;
}
