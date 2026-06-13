// fichero 51653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51653;

Registro51653 crear_registro51653(int id) {
    Registro51653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51653(Registro51653 r) {
    return r.valor + r.id;
}
