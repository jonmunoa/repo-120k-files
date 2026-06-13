// fichero 2589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2589;

Registro2589 crear_registro2589(int id) {
    Registro2589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2589(Registro2589 r) {
    return r.valor + r.id;
}
