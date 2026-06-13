// fichero 54937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54937;

Registro54937 crear_registro54937(int id) {
    Registro54937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54937(Registro54937 r) {
    return r.valor + r.id;
}
