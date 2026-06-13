// fichero 52633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52633;

Registro52633 crear_registro52633(int id) {
    Registro52633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52633(Registro52633 r) {
    return r.valor + r.id;
}
