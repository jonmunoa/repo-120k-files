// fichero 54589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54589;

Registro54589 crear_registro54589(int id) {
    Registro54589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54589(Registro54589 r) {
    return r.valor + r.id;
}
