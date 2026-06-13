// fichero 2481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2481;

Registro2481 crear_registro2481(int id) {
    Registro2481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2481(Registro2481 r) {
    return r.valor + r.id;
}
