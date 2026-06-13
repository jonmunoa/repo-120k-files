// fichero 51861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51861;

Registro51861 crear_registro51861(int id) {
    Registro51861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51861(Registro51861 r) {
    return r.valor + r.id;
}
