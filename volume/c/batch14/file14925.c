// fichero 14925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14925;

Registro14925 crear_registro14925(int id) {
    Registro14925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14925(Registro14925 r) {
    return r.valor + r.id;
}
