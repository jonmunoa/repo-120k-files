// fichero 34701 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34701;

Registro34701 crear_registro34701(int id) {
    Registro34701 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34701(Registro34701 r) {
    return r.valor + r.id;
}
