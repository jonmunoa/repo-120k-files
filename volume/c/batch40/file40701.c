// fichero 40701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40701;

Registro40701 crear_registro40701(int id) {
    Registro40701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40701(Registro40701 r) {
    return r.valor + r.id;
}
