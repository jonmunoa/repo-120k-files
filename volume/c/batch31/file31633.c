// fichero 31633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31633;

Registro31633 crear_registro31633(int id) {
    Registro31633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31633(Registro31633 r) {
    return r.valor + r.id;
}
