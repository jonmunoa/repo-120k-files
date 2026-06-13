// fichero 54825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54825;

Registro54825 crear_registro54825(int id) {
    Registro54825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54825(Registro54825 r) {
    return r.valor + r.id;
}
