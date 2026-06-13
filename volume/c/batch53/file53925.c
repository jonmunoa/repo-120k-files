// fichero 53925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53925;

Registro53925 crear_registro53925(int id) {
    Registro53925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53925(Registro53925 r) {
    return r.valor + r.id;
}
