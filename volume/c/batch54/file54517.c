// fichero 54517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54517;

Registro54517 crear_registro54517(int id) {
    Registro54517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54517(Registro54517 r) {
    return r.valor + r.id;
}
