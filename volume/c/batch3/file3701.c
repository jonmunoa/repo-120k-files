// fichero 3701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3701;

Registro3701 crear_registro3701(int id) {
    Registro3701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3701(Registro3701 r) {
    return r.valor + r.id;
}
