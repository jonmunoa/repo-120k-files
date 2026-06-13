// fichero 24633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24633;

Registro24633 crear_registro24633(int id) {
    Registro24633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24633(Registro24633 r) {
    return r.valor + r.id;
}
