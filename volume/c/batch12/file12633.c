// fichero 12633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12633;

Registro12633 crear_registro12633(int id) {
    Registro12633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12633(Registro12633 r) {
    return r.valor + r.id;
}
