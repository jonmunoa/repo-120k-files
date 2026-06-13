// fichero 47925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47925;

Registro47925 crear_registro47925(int id) {
    Registro47925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47925(Registro47925 r) {
    return r.valor + r.id;
}
