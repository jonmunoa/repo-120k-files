// fichero 15925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15925;

Registro15925 crear_registro15925(int id) {
    Registro15925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15925(Registro15925 r) {
    return r.valor + r.id;
}
