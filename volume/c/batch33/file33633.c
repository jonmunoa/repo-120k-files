// fichero 33633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33633;

Registro33633 crear_registro33633(int id) {
    Registro33633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33633(Registro33633 r) {
    return r.valor + r.id;
}
