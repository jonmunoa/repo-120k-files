// fichero 26633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26633;

Registro26633 crear_registro26633(int id) {
    Registro26633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26633(Registro26633 r) {
    return r.valor + r.id;
}
