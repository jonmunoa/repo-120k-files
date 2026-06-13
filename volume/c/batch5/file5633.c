// fichero 5633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5633;

Registro5633 crear_registro5633(int id) {
    Registro5633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5633(Registro5633 r) {
    return r.valor + r.id;
}
