// fichero 48925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48925;

Registro48925 crear_registro48925(int id) {
    Registro48925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48925(Registro48925 r) {
    return r.valor + r.id;
}
