// fichero 54925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54925;

Registro54925 crear_registro54925(int id) {
    Registro54925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54925(Registro54925 r) {
    return r.valor + r.id;
}
