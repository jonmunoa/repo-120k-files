// fichero 37633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37633;

Registro37633 crear_registro37633(int id) {
    Registro37633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37633(Registro37633 r) {
    return r.valor + r.id;
}
