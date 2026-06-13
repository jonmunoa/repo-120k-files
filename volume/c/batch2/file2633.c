// fichero 2633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2633;

Registro2633 crear_registro2633(int id) {
    Registro2633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2633(Registro2633 r) {
    return r.valor + r.id;
}
