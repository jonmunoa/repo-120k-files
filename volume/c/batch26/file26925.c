// fichero 26925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26925;

Registro26925 crear_registro26925(int id) {
    Registro26925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26925(Registro26925 r) {
    return r.valor + r.id;
}
