// fichero 8701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8701;

Registro8701 crear_registro8701(int id) {
    Registro8701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8701(Registro8701 r) {
    return r.valor + r.id;
}
