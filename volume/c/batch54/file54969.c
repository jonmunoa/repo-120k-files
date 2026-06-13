// fichero 54969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54969;

Registro54969 crear_registro54969(int id) {
    Registro54969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54969(Registro54969 r) {
    return r.valor + r.id;
}
