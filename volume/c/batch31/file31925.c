// fichero 31925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31925;

Registro31925 crear_registro31925(int id) {
    Registro31925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31925(Registro31925 r) {
    return r.valor + r.id;
}
