// fichero 7701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7701;

Registro7701 crear_registro7701(int id) {
    Registro7701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7701(Registro7701 r) {
    return r.valor + r.id;
}
