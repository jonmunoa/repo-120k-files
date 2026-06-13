// fichero 46925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46925;

Registro46925 crear_registro46925(int id) {
    Registro46925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46925(Registro46925 r) {
    return r.valor + r.id;
}
