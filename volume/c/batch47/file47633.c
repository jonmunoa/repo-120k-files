// fichero 47633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47633;

Registro47633 crear_registro47633(int id) {
    Registro47633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47633(Registro47633 r) {
    return r.valor + r.id;
}
