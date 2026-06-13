// fichero 35633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35633;

Registro35633 crear_registro35633(int id) {
    Registro35633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35633(Registro35633 r) {
    return r.valor + r.id;
}
