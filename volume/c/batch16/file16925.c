// fichero 16925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16925;

Registro16925 crear_registro16925(int id) {
    Registro16925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16925(Registro16925 r) {
    return r.valor + r.id;
}
