// fichero 36633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36633;

Registro36633 crear_registro36633(int id) {
    Registro36633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36633(Registro36633 r) {
    return r.valor + r.id;
}
