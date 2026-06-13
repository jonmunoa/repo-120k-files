// fichero 29925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29925;

Registro29925 crear_registro29925(int id) {
    Registro29925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29925(Registro29925 r) {
    return r.valor + r.id;
}
