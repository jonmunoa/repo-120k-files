// fichero 52925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52925;

Registro52925 crear_registro52925(int id) {
    Registro52925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52925(Registro52925 r) {
    return r.valor + r.id;
}
