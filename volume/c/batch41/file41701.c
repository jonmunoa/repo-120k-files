// fichero 41701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41701;

Registro41701 crear_registro41701(int id) {
    Registro41701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41701(Registro41701 r) {
    return r.valor + r.id;
}
