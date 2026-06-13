// fichero 54665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54665;

Registro54665 crear_registro54665(int id) {
    Registro54665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54665(Registro54665 r) {
    return r.valor + r.id;
}
