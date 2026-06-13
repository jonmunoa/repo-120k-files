// fichero 5925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5925;

Registro5925 crear_registro5925(int id) {
    Registro5925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5925(Registro5925 r) {
    return r.valor + r.id;
}
