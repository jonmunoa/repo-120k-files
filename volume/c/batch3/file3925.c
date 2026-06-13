// fichero 3925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3925;

Registro3925 crear_registro3925(int id) {
    Registro3925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3925(Registro3925 r) {
    return r.valor + r.id;
}
