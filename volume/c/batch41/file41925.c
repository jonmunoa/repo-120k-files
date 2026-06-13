// fichero 41925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41925;

Registro41925 crear_registro41925(int id) {
    Registro41925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41925(Registro41925 r) {
    return r.valor + r.id;
}
