// fichero 42633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42633;

Registro42633 crear_registro42633(int id) {
    Registro42633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42633(Registro42633 r) {
    return r.valor + r.id;
}
