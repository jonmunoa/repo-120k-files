// fichero 21633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21633;

Registro21633 crear_registro21633(int id) {
    Registro21633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21633(Registro21633 r) {
    return r.valor + r.id;
}
