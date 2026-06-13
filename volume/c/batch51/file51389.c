// fichero 51389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51389;

Registro51389 crear_registro51389(int id) {
    Registro51389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51389(Registro51389 r) {
    return r.valor + r.id;
}
