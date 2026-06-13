// fichero 49633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49633;

Registro49633 crear_registro49633(int id) {
    Registro49633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49633(Registro49633 r) {
    return r.valor + r.id;
}
