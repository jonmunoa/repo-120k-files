// fichero 23141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23141;

Registro23141 crear_registro23141(int id) {
    Registro23141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23141(Registro23141 r) {
    return r.valor + r.id;
}
