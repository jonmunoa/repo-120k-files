// fichero 50633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50633;

Registro50633 crear_registro50633(int id) {
    Registro50633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50633(Registro50633 r) {
    return r.valor + r.id;
}
