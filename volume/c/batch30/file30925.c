// fichero 30925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30925;

Registro30925 crear_registro30925(int id) {
    Registro30925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30925(Registro30925 r) {
    return r.valor + r.id;
}
