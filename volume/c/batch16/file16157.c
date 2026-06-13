// fichero 16157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16157;

Registro16157 crear_registro16157(int id) {
    Registro16157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16157(Registro16157 r) {
    return r.valor + r.id;
}
