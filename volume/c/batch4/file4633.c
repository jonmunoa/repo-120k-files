// fichero 4633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4633;

Registro4633 crear_registro4633(int id) {
    Registro4633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4633(Registro4633 r) {
    return r.valor + r.id;
}
