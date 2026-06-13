// fichero 11925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11925;

Registro11925 crear_registro11925(int id) {
    Registro11925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11925(Registro11925 r) {
    return r.valor + r.id;
}
