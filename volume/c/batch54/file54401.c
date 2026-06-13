// fichero 54401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54401;

Registro54401 crear_registro54401(int id) {
    Registro54401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54401(Registro54401 r) {
    return r.valor + r.id;
}
