// fichero 54453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54453;

Registro54453 crear_registro54453(int id) {
    Registro54453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54453(Registro54453 r) {
    return r.valor + r.id;
}
