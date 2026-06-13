// fichero 9701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9701;

Registro9701 crear_registro9701(int id) {
    Registro9701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9701(Registro9701 r) {
    return r.valor + r.id;
}
