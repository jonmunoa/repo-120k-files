// fichero 25925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25925;

Registro25925 crear_registro25925(int id) {
    Registro25925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25925(Registro25925 r) {
    return r.valor + r.id;
}
