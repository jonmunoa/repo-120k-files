// fichero 6633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6633;

Registro6633 crear_registro6633(int id) {
    Registro6633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6633(Registro6633 r) {
    return r.valor + r.id;
}
