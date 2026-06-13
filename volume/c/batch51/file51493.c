// fichero 51493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51493;

Registro51493 crear_registro51493(int id) {
    Registro51493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51493(Registro51493 r) {
    return r.valor + r.id;
}
