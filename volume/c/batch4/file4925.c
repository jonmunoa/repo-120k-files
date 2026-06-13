// fichero 4925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4925;

Registro4925 crear_registro4925(int id) {
    Registro4925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4925(Registro4925 r) {
    return r.valor + r.id;
}
