// fichero 7633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7633;

Registro7633 crear_registro7633(int id) {
    Registro7633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7633(Registro7633 r) {
    return r.valor + r.id;
}
