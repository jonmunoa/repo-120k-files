// fichero 30633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30633;

Registro30633 crear_registro30633(int id) {
    Registro30633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30633(Registro30633 r) {
    return r.valor + r.id;
}
