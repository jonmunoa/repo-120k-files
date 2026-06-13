// fichero 54389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54389;

Registro54389 crear_registro54389(int id) {
    Registro54389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54389(Registro54389 r) {
    return r.valor + r.id;
}
