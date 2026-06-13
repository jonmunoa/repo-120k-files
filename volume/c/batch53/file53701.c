// fichero 53701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53701;

Registro53701 crear_registro53701(int id) {
    Registro53701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53701(Registro53701 r) {
    return r.valor + r.id;
}
