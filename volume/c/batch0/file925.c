// fichero 925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro925;

Registro925 crear_registro925(int id) {
    Registro925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro925(Registro925 r) {
    return r.valor + r.id;
}
