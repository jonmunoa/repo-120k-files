// fichero 13925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13925;

Registro13925 crear_registro13925(int id) {
    Registro13925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13925(Registro13925 r) {
    return r.valor + r.id;
}
