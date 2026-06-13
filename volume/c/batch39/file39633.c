// fichero 39633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39633;

Registro39633 crear_registro39633(int id) {
    Registro39633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39633(Registro39633 r) {
    return r.valor + r.id;
}
