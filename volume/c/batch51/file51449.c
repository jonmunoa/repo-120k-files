// fichero 51449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51449;

Registro51449 crear_registro51449(int id) {
    Registro51449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51449(Registro51449 r) {
    return r.valor + r.id;
}
