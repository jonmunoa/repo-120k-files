// fichero 18633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18633;

Registro18633 crear_registro18633(int id) {
    Registro18633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18633(Registro18633 r) {
    return r.valor + r.id;
}
