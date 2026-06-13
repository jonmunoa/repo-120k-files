// fichero 33925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33925;

Registro33925 crear_registro33925(int id) {
    Registro33925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33925(Registro33925 r) {
    return r.valor + r.id;
}
