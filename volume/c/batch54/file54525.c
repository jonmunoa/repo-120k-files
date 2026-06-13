// fichero 54525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54525;

Registro54525 crear_registro54525(int id) {
    Registro54525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54525(Registro54525 r) {
    return r.valor + r.id;
}
