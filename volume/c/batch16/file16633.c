// fichero 16633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16633;

Registro16633 crear_registro16633(int id) {
    Registro16633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16633(Registro16633 r) {
    return r.valor + r.id;
}
