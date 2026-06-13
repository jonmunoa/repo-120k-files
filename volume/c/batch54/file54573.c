// fichero 54573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54573;

Registro54573 crear_registro54573(int id) {
    Registro54573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54573(Registro54573 r) {
    return r.valor + r.id;
}
