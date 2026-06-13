// fichero 54245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54245;

Registro54245 crear_registro54245(int id) {
    Registro54245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54245(Registro54245 r) {
    return r.valor + r.id;
}
