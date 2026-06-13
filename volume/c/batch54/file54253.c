// fichero 54253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54253;

Registro54253 crear_registro54253(int id) {
    Registro54253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54253(Registro54253 r) {
    return r.valor + r.id;
}
