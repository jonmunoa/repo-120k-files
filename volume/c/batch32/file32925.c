// fichero 32925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32925;

Registro32925 crear_registro32925(int id) {
    Registro32925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32925(Registro32925 r) {
    return r.valor + r.id;
}
