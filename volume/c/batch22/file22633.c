// fichero 22633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22633;

Registro22633 crear_registro22633(int id) {
    Registro22633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22633(Registro22633 r) {
    return r.valor + r.id;
}
