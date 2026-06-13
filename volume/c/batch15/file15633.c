// fichero 15633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15633;

Registro15633 crear_registro15633(int id) {
    Registro15633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15633(Registro15633 r) {
    return r.valor + r.id;
}
