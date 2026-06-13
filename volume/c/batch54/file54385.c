// fichero 54385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54385;

Registro54385 crear_registro54385(int id) {
    Registro54385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54385(Registro54385 r) {
    return r.valor + r.id;
}
