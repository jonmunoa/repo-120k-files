// fichero 34633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34633;

Registro34633 crear_registro34633(int id) {
    Registro34633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34633(Registro34633 r) {
    return r.valor + r.id;
}
