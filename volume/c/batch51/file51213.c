// fichero 51213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51213;

Registro51213 crear_registro51213(int id) {
    Registro51213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51213(Registro51213 r) {
    return r.valor + r.id;
}
