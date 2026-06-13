// fichero 54689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54689;

Registro54689 crear_registro54689(int id) {
    Registro54689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54689(Registro54689 r) {
    return r.valor + r.id;
}
