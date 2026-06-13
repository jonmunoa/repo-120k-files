// fichero 27925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27925;

Registro27925 crear_registro27925(int id) {
    Registro27925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27925(Registro27925 r) {
    return r.valor + r.id;
}
