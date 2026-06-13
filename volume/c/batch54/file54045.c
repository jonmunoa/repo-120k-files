// fichero 54045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54045;

Registro54045 crear_registro54045(int id) {
    Registro54045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54045(Registro54045 r) {
    return r.valor + r.id;
}
