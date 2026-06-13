// fichero 51337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51337;

Registro51337 crear_registro51337(int id) {
    Registro51337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51337(Registro51337 r) {
    return r.valor + r.id;
}
