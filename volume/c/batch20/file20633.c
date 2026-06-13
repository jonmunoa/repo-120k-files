// fichero 20633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20633;

Registro20633 crear_registro20633(int id) {
    Registro20633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20633(Registro20633 r) {
    return r.valor + r.id;
}
