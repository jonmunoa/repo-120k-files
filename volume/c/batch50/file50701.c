// fichero 50701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50701;

Registro50701 crear_registro50701(int id) {
    Registro50701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50701(Registro50701 r) {
    return r.valor + r.id;
}
