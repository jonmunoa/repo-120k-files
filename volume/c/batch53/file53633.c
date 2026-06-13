// fichero 53633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53633;

Registro53633 crear_registro53633(int id) {
    Registro53633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53633(Registro53633 r) {
    return r.valor + r.id;
}
