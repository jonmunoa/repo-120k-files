// fichero 39925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39925;

Registro39925 crear_registro39925(int id) {
    Registro39925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39925(Registro39925 r) {
    return r.valor + r.id;
}
