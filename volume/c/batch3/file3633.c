// fichero 3633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3633;

Registro3633 crear_registro3633(int id) {
    Registro3633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3633(Registro3633 r) {
    return r.valor + r.id;
}
