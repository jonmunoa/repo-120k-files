// fichero 32633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32633;

Registro32633 crear_registro32633(int id) {
    Registro32633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32633(Registro32633 r) {
    return r.valor + r.id;
}
