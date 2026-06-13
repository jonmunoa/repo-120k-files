// fichero 54645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54645;

Registro54645 crear_registro54645(int id) {
    Registro54645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54645(Registro54645 r) {
    return r.valor + r.id;
}
