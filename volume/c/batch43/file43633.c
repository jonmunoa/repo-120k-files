// fichero 43633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43633;

Registro43633 crear_registro43633(int id) {
    Registro43633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43633(Registro43633 r) {
    return r.valor + r.id;
}
