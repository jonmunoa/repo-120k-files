// fichero 54533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54533;

Registro54533 crear_registro54533(int id) {
    Registro54533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54533(Registro54533 r) {
    return r.valor + r.id;
}
