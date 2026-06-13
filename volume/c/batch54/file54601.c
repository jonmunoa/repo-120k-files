// fichero 54601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54601;

Registro54601 crear_registro54601(int id) {
    Registro54601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54601(Registro54601 r) {
    return r.valor + r.id;
}
