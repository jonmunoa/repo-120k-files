// fichero 38633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38633;

Registro38633 crear_registro38633(int id) {
    Registro38633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38633(Registro38633 r) {
    return r.valor + r.id;
}
