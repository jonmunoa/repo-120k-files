// fichero 54493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54493;

Registro54493 crear_registro54493(int id) {
    Registro54493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54493(Registro54493 r) {
    return r.valor + r.id;
}
