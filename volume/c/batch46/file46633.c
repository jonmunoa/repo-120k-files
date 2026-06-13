// fichero 46633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46633;

Registro46633 crear_registro46633(int id) {
    Registro46633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46633(Registro46633 r) {
    return r.valor + r.id;
}
