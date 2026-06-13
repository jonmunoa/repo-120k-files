// fichero 28633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28633;

Registro28633 crear_registro28633(int id) {
    Registro28633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28633(Registro28633 r) {
    return r.valor + r.id;
}
