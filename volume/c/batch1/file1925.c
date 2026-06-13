// fichero 1925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1925;

Registro1925 crear_registro1925(int id) {
    Registro1925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1925(Registro1925 r) {
    return r.valor + r.id;
}
