// fichero 54113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54113;

Registro54113 crear_registro54113(int id) {
    Registro54113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54113(Registro54113 r) {
    return r.valor + r.id;
}
