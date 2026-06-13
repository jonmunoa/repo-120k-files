// fichero 20925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20925;

Registro20925 crear_registro20925(int id) {
    Registro20925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20925(Registro20925 r) {
    return r.valor + r.id;
}
