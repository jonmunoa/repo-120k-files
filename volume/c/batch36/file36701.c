// fichero 36701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36701;

Registro36701 crear_registro36701(int id) {
    Registro36701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36701(Registro36701 r) {
    return r.valor + r.id;
}
