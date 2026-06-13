// fichero 54317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54317;

Registro54317 crear_registro54317(int id) {
    Registro54317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54317(Registro54317 r) {
    return r.valor + r.id;
}
