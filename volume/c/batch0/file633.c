// fichero 633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro633;

Registro633 crear_registro633(int id) {
    Registro633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro633(Registro633 r) {
    return r.valor + r.id;
}
