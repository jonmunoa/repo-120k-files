// fichero 701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro701;

Registro701 crear_registro701(int id) {
    Registro701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro701(Registro701 r) {
    return r.valor + r.id;
}
