// fichero 44701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44701;

Registro44701 crear_registro44701(int id) {
    Registro44701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44701(Registro44701 r) {
    return r.valor + r.id;
}
