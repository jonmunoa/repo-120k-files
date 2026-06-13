// fichero 1633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1633;

Registro1633 crear_registro1633(int id) {
    Registro1633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1633(Registro1633 r) {
    return r.valor + r.id;
}
