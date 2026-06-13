// fichero 54813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54813;

Registro54813 crear_registro54813(int id) {
    Registro54813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54813(Registro54813 r) {
    return r.valor + r.id;
}
