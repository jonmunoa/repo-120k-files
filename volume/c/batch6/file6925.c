// fichero 6925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6925;

Registro6925 crear_registro6925(int id) {
    Registro6925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6925(Registro6925 r) {
    return r.valor + r.id;
}
